#include<iostream>
using namespace std;
class A{ 
    private:
    int x=20;
    int y=30;

    public:
    //a = 5 , b = 10 
    int sum(int &a , const int &b )
    {
        a=x; //a = 20
        y=b; //b=10 
        // sum = 15
        return a+b;
    }
    // a = 5 , b = 10 
    int product(int &a , int &b )const{
        a=x; //a = 20
        b=y; //b = 10
        // product = 600
        return a*b;
    }
};
int main(){
    A var;
    int var1=5, var2=10 ,  var3=15;
    int i1= var.sum(var1,var2);
    int i2= var.product(var2 , var3);
    cout<<endl<<"Sum - "<<i1<<endl<<"Product - "<<i2;
}