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
int main(){
    student s;
    cout<<"Enter Grades: ";
    cin>>s.grade;
    cout<<"Enter Section: ";
    cin>>s.section;
    cout<<"Enter the information about students: ";
    cin>>s.sub.math>>s.sub.physics>>s.sub.chemistry;
    cout<<s.grade<<" "<<s.section<<endl;
    cout<<s.sub.math<<" "<<s.sub.physics<<" "<<s.sub.chemistry;
}