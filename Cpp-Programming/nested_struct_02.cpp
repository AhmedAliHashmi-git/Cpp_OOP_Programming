#include<iostream>
using namespace std;
struct Hostel{
     string name;
     string adress;
     int room_number;
     float fee_paid;
     int duration;
};
struct University{
     string name;
     int roll_number;
     float cgpa;
     int semester;
     Hostel info;
};
int main(){
    University s[3];
    for(int i=0  ;   i<3   ;   i++)
    {
        cout<<"Enter the information of "<<i+1<<" student: ";
        cin>>s[i].name>>s[i].roll_number>>s[i].cgpa>>s[i].semester;
        
    }
    for(int i=0  ;  i<3   ;   i++){
        cout<<"Enter the information of his hostel of "<<i+1<<" student: ";
        cin>>s[i].info.name>>s[i].info.adress>>s[i].info.room_number>>s[i].info.fee_paid>>s[i].info.duration;
    }
    for(int i=0 ; i<3 ; i++){
        cout<<s[i].name<<" "<<s[i].roll_number<<" "<<s[i].cgpa<<" "<<s[i].semester<<endl;
        cout<<s[i].info.name<<" "<<s[i].info.adress<<" "<<s[i].info.room_number<<" "<<s[i].info.fee_paid<<" "<<s[i].info.duration<<endl;
    }



}