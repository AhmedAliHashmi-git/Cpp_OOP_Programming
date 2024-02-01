#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct Employee{
    int numId;
    char name[25];
    int age;
    long salary;
};
void display(Employee);
int main()
{
    //   variables
    Employee e1 = {1 , "Hashmi" , 35 , 4500000};
    display(e1);
}
void display(Employee e)
{
    cout<<"\n\nThe empolyee id is : "<<e.numId<<endl;
}