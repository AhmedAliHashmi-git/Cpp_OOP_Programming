#include<iostream>
using namespace std;
class Constructor{
   
   public:
   Constructor()
   {
        int val=5;
        cout<<"The value of default constructor is : ("<<val<<")"<<endl;
   }
    Constructor(int val){
        cout<<"The value of first value argument is : ("<<val<<")"<<endl;
    }

    Constructor(int val , int val1)
    {
       cout<<"The value of Second value argument is : ("<<val<<" , "<<val1<<")"<<endl;
    } 
    Constructor(int val  ,  int val1    ,  int val2)
    {
        cout<<"The value of Three value argument is : ("<<val<<" , "<<val1<<" , "<<val2<<")"<<endl;
    }
};
int main()
{
    Constructor c;
    Constructor c1(10);
    Constructor c2(10,20);
    Constructor c3(10,20,30);
}