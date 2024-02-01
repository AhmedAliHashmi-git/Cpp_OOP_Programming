#include<iostream>
using namespace std;
struct subject{
     int math;
     int physics;
     int chemistry;
};
struct student{
     int grade;
     char section;
     subject sub;
};
void main{
    student s;
    cout<<"Enter number in Math: ";
    cin>>s.math;
    cout<<"Enter number in Physics: ";
    cin>>s.physics;
    cout<<"Enter number in Chemistry: ";
    cin>>s.chemistry;
    cout<<"Enter the information about students: ";
    cin>>s.sub.math>>s.sub.physics>>s.sub.chemistry;
    cout<<s.math<<" "<<s.physics<<" "<<s.chemistry;
    cout<<s.sub.math<<" "<<s.sub.physics<<" "<<s.sub.chemistry;
}