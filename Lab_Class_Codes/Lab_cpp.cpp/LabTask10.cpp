#include<iostream>
using namespace std;

class Animal{
    protected:
    string name;
    string color;

    public:
    Animal(string n  ,  string c):name(n) , color(c){}
    virtual ~Animal(){}
    virtual void Display() = 0 ;
};

class Deer : public Animal{
  
};