#include<iostream>
using namespace std;
typedef struct ustudent{
      string name;
      string adress;
      int roll_no;
      float gpa;
}st;
int main(){
     st s[3];
     cout<<"Enter the information here:"<<endl;
     for(int i=0  ;  i<3   ;  i++)
     {
        cout<<i+1<<": ";
        cin>>s[i].name>>s[i].adress>>s[i].roll_no>>s[i].gpa;
     }
     for(int i=0  ; i<3   ;   i++)
     {
        cout<<s[i].name<<" "<<s[i].adress<<" "<<s[i].roll_no<<" "<<s[i].gpa<<endl;
     }

}