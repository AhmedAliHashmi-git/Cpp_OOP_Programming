#include<iostream>
using namespace std;
struct Student{
    string name;
    int rollNumber;
    int position;
};

struct StudInfo{
    string fatherName;
    string occupation;
    Student info;
};

int main()
{
    int num;
    cout<<"Enter how many students: ";
    cin>>num;
    StudInfo stu[num];
    for(int i=0  ;  i<num  ;  i++)
    {
        cout<<"Enter the information of student Father: "<<i+1;
        cin>>stu[i].fatherName>>stu[i].occupation;
    }
    for(int i = 0 ;  i<num    ;   i++){
            cout<<"Enter the information of the student: ";
            cin>>stu[i].info.name>>stu[i].info.rollNumber>>stu[i].info.position; 
    }




   for(int i=0  ;  i<num  ;  i++)
    {
        cout<<stu[i].fatherName<<stu[i].occupation<<endl;
    }
    for(int i = 0 ;  i<num    ;   i++){
            cout<<stu[i].info.name<<stu[i].info.rollNumber<<stu[i].info.position<<endl; 
    }




            

}