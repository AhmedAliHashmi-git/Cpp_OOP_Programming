// Create an abstract base class called Employee with pure virtual functions calculateSalary() and displayDetails(). Derive two classes (HourlyEmployee and SalariedEmployee) from Employee and implement the virtual functions in each derived class according to their respective salary calculation formulas. Use polymorphism to calculate and display the salaries and details of different employees.
#include<iostream>
#include<string.h>
using namespace std;
class Employee{
   public:
   virtual void calculateSalary() = 0;
   virtual void displayDetails() = 0;
   virtual  ~Employee(){}
};
class HourlyEmployee : public Employee{
   string name;
   double hourlyTime;
   double TotalSalary;
   public:

   HourlyEmployee(int t , string n):hourlyTime(t) , name(n){}
   void calculateSalary()override {
      TotalSalary = hourlyTime * 30;
   }

   void displayDetails()override {
    cout<<"The name of  the Empolyee is: "<<name<<endl<<"The Salary of the Empolyee: "<<TotalSalary<<endl;
   }
};
class SalariedEmployee : public Employee{
        string name;
        double salary;
        public:
        SalariedEmployee(string n , double s):name(n) , salary(s){}
        void calculateSalary() override{}
        void displayDetails()override {
    cout<<"The name of  the Empolyee is: "<<name<<endl<<"The Salary of the Empolyee: "<<salary<<endl;
   }
};
int main(){
    SalariedEmployee* s = new SalariedEmployee("Ali" , 3000.56);
    HourlyEmployee* h = new HourlyEmployee(1250,"Ahmed");
    Employee* emp[] = {s , h};
    for(int i = 0 ; i<2  ; i++){
        emp[i]->calculateSalary();
        emp[i]->displayDetails();
    }
}                           