#include<iostream>
#include<string>
using namespace std;

class Person{
   private:
   string name;

   public:
   Person(string n) : name(n){}
   string getName(){
    return name;
   }
};

class Brain{
    private:
    Person person;

    public:
    Brain(string n) : person(n){
    cout<<person.getName()<<" Brain is working"<<endl;

    }
};

class Heart {
   private:
   Person person;

   public:
   Heart(string n):person(n){
     cout<<person.getName()<<" heart is pupping"<<endl;

   }
};

class Legs{
    private:
    Person person;

    public:
    Legs(string n):person(n){
    cout<<person.getName()<<" Because is running"<<endl;

    }
};

int main(){
   Person p("hashmi");
   Heart h("Hashmi");
   Brain b("Hashmi");
   Legs l("Hashmi");

}

