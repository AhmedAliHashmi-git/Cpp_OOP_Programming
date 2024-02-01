#include<iostream>
using namespace std;
struct Student{
    string name;
    int age;
};
int main()
{
    Student s1;
    s1.name= "Hashmi";
    Student *s;
    s = &s1;
    cout<<s->name<<endl;  
    s = new Student ; // new return an address.
    s->name = "Usman";
    cout<<s->name;
    //Delete Operator Delete always get pointer with new


}