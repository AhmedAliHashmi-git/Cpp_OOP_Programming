// Write a C++ program to create a class "Person" with the following private members: name, age, and address. Implement a copy constructor for the Person class.
#include<iostream>
using namespace std;
class Person{
     string name;
     int age;
     string adress;

     public:
     Person(string name = "Not set"  ,  int  age = 0 ,   string adress = "Not way"){
        this->name = name;
        this->age = age;
        this->adress = adress;
     }

     Person(Person &person){
        name = person.name;
        age = person.age;
        adress = person.adress;
     }
     void show();
};

void Person:: show(){
    cout<<name<<endl<<age<<endl<<adress<<endl;
}
int main(){
    Person person("hashmi" , 21  ,  "Kashmir");
    Person person2;
    person2 = person;
    person2.show();

}
