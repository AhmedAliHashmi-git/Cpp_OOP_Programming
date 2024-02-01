#include<iostream>

using namespace std;

class Complex{
    private:
     int a;
     int b;

     public:

     void value(int v1 = 0  ,  int v2 = 0){
      a = v1;
      b = v2;
     }

     void Sum(Complex o1 , Complex o2){
      a = o1.a + o1.a;
      b = o2.b + o2.b;
     }
      

      void print()
      {
         cout<<a<<" +"<<b<<" i"<<endl;
      }
};


int main()
{
   Complex c1, c2 , c3;
   c1.value(3,4);
   c1.print();
   c2.value(5,6);
   c2.print();
   c3.Sum(c1 , c2);
   c3.print();
}