#include<iostream>
using namespace std;
class Operators{
   private:
   int x;
   int y;
   public:
   Operators(int a , int b) : x(a) , y(b){}
   Operators operator+(const Operators& other){
    return Operators(x + other.x , y + other.y);
   }
   void Display(){
    cout << x <<" + " << y <<"i";
   }
   
};

int main(){
    Operators op1(3 , 2);
    Operators op2(4 , 5);
    Operators op3 = op1 + op2;
    op3.Display();
    return 0;
}