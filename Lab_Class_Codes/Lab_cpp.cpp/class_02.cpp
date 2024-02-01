#include<iostream>
#include<iomanip>
using namespace std;
class Math{
     private:

     int num1 , num2 , num3;
     float dob1 , dob2 , dob3;
     public:


     Math(){
        num1=3;
        num2=4;
        num3=8;
        cout<<"The value of num1 and num2 and num3 is : "<<num1<<" "<<num2<<" "<<num3<<endl;
     }
     

   //   Math(int a , int b , int c)
   //   {
   //      num1=a;
   //      num2=b;
   //      num3=c;
   //      cout<<"The value of a b and c is : "<<num1<<" "<<num2<<" "<<num3<<endl;
   //   }



     Math(float x=4.4 , float y=5.5  , float z=6.6)
     {
        dob1=x;
        dob2=y;
        dob3=z;
        cout<<"The value of x y and z is : "<<dob1<<" "<<dob2<<" "<<dob3<<endl;
     }
    //  void Display()
    //  {
        
    //  }
};
int main()
{
   Math a;
   Math b;
   // Math c;
   
}