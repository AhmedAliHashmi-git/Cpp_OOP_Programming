#include<iostream>
using namespace std;
class Animal{
    public:
    void Speak(){
    cout<<"Animal Speaks"<<endl;
    }

};

class Dog : public Animal{
    public:
    void Speak(){
        Animal::Speak();
        cout<<"Bow";
    }
};

int main(){
    Animal* a =  new Animal;    
    a->Speak();
    delete a;
    Dog d;
    d.Speak();
}