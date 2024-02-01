#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
    string name;
    string jobTitle;
    int id;
    int noOfHoursWorked;
    public:
    //..Default Constructor
    Employee(){
        name = "Not set";
        jobTitle = "Not set";
        id = 0;
        noOfHoursWorked = 0;
      
    }
    //..Getter and Setter
    void setName(string name){this->name = name;}
    string getName(){return name;}
    void setJobTitle(string jobTitle){this->jobTitle = jobTitle;}
    string getJobTitle(){return jobTitle;}
    void setID(int id){this->id = id;}
    int getID(){return id;}
    void setNoOfHoursWorked(int noOfHoursWorked){this->noOfHoursWorked = noOfHoursWorked;}
    int getNoOfHoursWored(){return noOfHoursWorked;}
    //..Declaration of a function
    void CalculateSalary(){
     const int hourlyRate = 30;
     const int overTimeRate = hourlyRate*2;
     int salary;
     int overTime;
     int ExtraTime;
     if(noOfHoursWorked <= 40)
     {
        salary = noOfHoursWorked*hourlyRate;
        cout<<endl;
     }
     else 
     {
         overTime=noOfHoursWorked - 40;
         salary = 40*hourlyRate;
         overTime*=overTimeRate;
         salary+=overTime;
         cout << endl;
     }
     DisplayData(salary); //..Calling of a function define in 48th line
    }
    //..Function Declaration 
    void DisplayData(int salary)
    {
        cout<<"Name - "<<name<<endl;
        cout<<"Job Title - "<<jobTitle<<endl;
        cout<<"ID - "<<id<<endl;
        cout<<"Number of Hours Worked - "<<noOfHoursWorked<<endl;
        cout<<"Salary - "<<salary<<endl;
        cout << endl ;
        }
};

int main()
{
    int number;
    string name;
    string jobTitle;
    int id;
    int noOfHoursWorked;
    cout<<"How many Employee are working in the company: ";
    cin>>number;
    Employee emp[number];
    //..Taking input from the user
    for(int i=0  ;  i<number  ;  i++){
        cin.ignore();
        cout<<"Enter the Name of "<<i+1<<" Employee: ";
        getline(cin , name);
        emp[i].setName(name);
        emp[i].getName();
        cout<<"What's his/her Job Title: ";
        cin>>jobTitle;
        emp[i].setJobTitle(jobTitle);
        emp[i].getJobTitle();
        cout<<"What's his/her id number: ";
        cin>>id;
        emp[i].setID(id);
        emp[i].getID();
        cout<<"Number of hours worked: ";
        cin>>noOfHoursWorked;
        emp[i].setNoOfHoursWorked(noOfHoursWorked);
        emp[i].getNoOfHoursWored();
        
    }
    //..Calling function  which is define in 27th line
    for(int i = 0  ; i<number  ; i++)
    {
       emp[i].CalculateSalary();
    }
}