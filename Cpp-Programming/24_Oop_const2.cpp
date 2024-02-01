#include<iostream>
using namespace std;
class A{
   private:
   int x;
   int y;
   public:
   int sum(const int &a  ,  const int &b);
   int product(int &a , int &b)const;
};
 int A::sum(const int &a ,  const int &b){
   x=a;
   y=b;
   return x+y;
}
 int A::product(int &a , int &b)const{
    a=x;
    b=y;
    return a*b;
}
int main(){
    A var;
    int var1 = 5,var2 = 10,var3 = 15;
    int i1= var.sum(var1 , var2);
    int i2= var.product(var2 , var3);
    cout<<endl<<"Sum - "<<i1<<endl<<"Product - "<<i2<<endl;
}




