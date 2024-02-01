#include<iostream>
using namespace std;
class Class{
   int data;
   public:
   Class(int value):data(value)
   {
    
   }
   void increament(){
    data++;
   }
   int value(){
    return data;
   }

};

int main(){
    Class o1(123);
    Class o2 = o1;
    Class o3(o2);
    o2.increament();
    o3.increament();
    o3.increament();
    cout<<o1.value()<<endl;
    cout<<o2.value()<<endl;
    cout<<o3.value()<<endl;
    return 0;
}