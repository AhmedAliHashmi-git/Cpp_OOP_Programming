#include<iostream>
using namespace std;
class Class{
    public:
    static int Static;
    int nonStatic;
    void print(){
        cout<<"Static- "<<++Static<<endl<<"Non Static- "<<nonStatic<<endl;
    }
};
// int Class::Static = 0;
int main(){
     Class obj1 , obj2;
     obj1.nonStatic = 20;
     obj2.nonStatic = 30;
     obj1.print();
     obj2.print();
     return 0;
}













