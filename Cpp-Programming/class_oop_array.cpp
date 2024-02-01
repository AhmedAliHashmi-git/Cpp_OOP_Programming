#include<iostream>
#include <string>
using namespace std;
class Employee{
    public:
    string name;
    int age;
    string previous_company;
    float university_gpa;
    void Info(){
        cout<<"Name - "<<name<<endl;
        cout<<"Age - "<<age<<endl;
        cout<<"previous_company - "<<previous_company<<endl;
        cout<<"university_gpa - "<<university_gpa;
    }
    Employee(string Name, int Age, string Previous_Company, float University_Gpa)
    {
        name=Name;
        age=Age;
        previous_company=Previous_Company;
        university_gpa=University_Gpa;
    }
    
};
int main(){
    Employee Emp1= Employee("hashmi" , 21 , "Amazon" , 3.4);
    Emp1.Info();
      
}