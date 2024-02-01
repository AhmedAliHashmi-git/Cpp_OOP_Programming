#include<iostream>
#include<iomanip>
using namespace std;
// keyword  ,  structure name
struct empolyee{
        string name;   
        double worked_hours;   //structure members
        double salary;
};
int main()
{
    //variable

    //empolyee # 01
    cout<<setw(60)<<setfill('-')<<""<<endl;

    empolyee e1,e2;
    e1.name="Hashmi";
    e1.worked_hours=10.5;
    e1.salary=e1.worked_hours*50;


    //empolyee # 02
    e2.name="Khan";
    e2.worked_hours=20.5;
    e2.salary=e1.worked_hours*100;

    cout<<"Empolyee name\t"<<e1.name<<endl<<"Empolyee worked_hours\t"<<e1.worked_hours<<endl
    <<"empolyee salary\t"<<e1.salary<<endl;
    cout<<string(60 , '-')<<""<<endl;
    cout<<"Empolyee 2 name\t"<<e2.name<<endl<<"Empolyee 2 worked_hours\t"<<e2.worked_hours<<endl
    <<"empolyee 2 salary\t"<<e2.salary<<endl;







}