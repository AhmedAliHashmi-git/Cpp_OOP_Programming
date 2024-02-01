#include<iostream>
using namespace std;
class A{
    private:
    int a,b;
    public:
    A();
    int Sum();
};
A::A(){
    a=10;
    b=20;
}
int A :: Sum(){
    return a+b;
}
int main(){
    A add;
    cout<<"The sum of a and b is : "<<add.Sum();
}