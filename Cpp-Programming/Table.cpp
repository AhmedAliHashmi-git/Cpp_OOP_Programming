#include<iostream>
using namespace std;
int Table(int t);
int main(){
    int a,choice;
    char n,N,Y,y;
        cout<<"Do you want to print any table (Y/N)";
        cin>>choice;
        if(choice=='Y' || choice=='y')
        {
            cout<<"Enter the value";
            cin>>a;
            Table(a);
        }
       else if(choice== 'N' || choice== 'n')
        {
            cout<<"Thank you";
            
        }
    
    
}
Table(int t)
{   

    int a;     
    
    int choice;
    char Y,y,N,n;
    for(int i=1  ;  i<=10   ;   i++)
    {
        cout<<t<<"*"<<i<<"="<<t*i<<endl;
    }

}