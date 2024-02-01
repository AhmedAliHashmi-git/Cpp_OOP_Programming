#include<iostream>
using namespace std;
class Complex{
    public:
   float real;
   float imaginary;
  void disp();
   
   void  set(float real, float imaginary){
    Complex c;
    this->real = real;
    this->imaginary = imaginary;  
    c.disp();
}

 
   Complex  sum(Complex c1 , Complex c2)
{
     real= c1.real + c1.real;
     imaginary= c2.imaginary + c2.imaginary;
    //  cout<< real+imaginary<<endl;
}

};


int main()
{
    Complex c1,c2,c3;
    c1.set(3.5 , 4.5);
    c2.set(5.5 , 5.5);
    c3.sum(c1 , c2);
}