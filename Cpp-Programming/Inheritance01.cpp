#include<iostream>
using namespace std;

class A{
    private:
    int y;

    public:

     int z;

    A(){
        y = 10;
        z = 20;
        cout<<"Constructor of A: "<<endl;
    }
    ~A(){
        cout<<"Destructor of A: "<<endl;
    }
    void print(){
        cout<<y<<" "<<z<<" "<<endl;
    }
    
    
};

class B : public A{
    public:                                       
    int var1;
    B(){
        var1 = 30;
        cout<<"Constructor of B: "<<endl;
    }

    ~B(){
        cout<<"Destructor of B: "<<endl;
    }
    void print(){
        A::print();
        cout<<var1<<endl;
         
    }
};

int main(){
    B objB;
    objB.print();
    return 0;
}