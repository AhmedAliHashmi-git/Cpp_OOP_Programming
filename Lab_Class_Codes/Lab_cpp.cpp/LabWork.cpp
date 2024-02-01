#include<iostream>
using namespace std;
class B;//forward declaration
class A{
   private:
   int a;

   public:
   A(){
    a= 0;
   }

   friend void show(A , B);//Bis declare forward.
};
class B{
   private:
   int b;
   public:

   B(){
    b = 20;
   }

   friend void show(A , B);
};

//formal parameter;
void show(A x , B y){
    int r;
    r = x.a + y.b;
    cout<<"The value of r is : "<<r<<endl;   
}
int main(){
A obj1;
B obj2;
show(obj1 ,obj2);
show(obj1 , obj2);

return 0;
}