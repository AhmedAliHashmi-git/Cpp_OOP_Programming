#include<iostream>
using namespace std;

class Person{
     string name;
     int age;
     public:

     Person(string name , int age){
        this->name = name;
        this->age = age;
     }

     string getName(){
        return name;
     }

     int getAge(){
        return age;
     }
};
class Student : public Person{
     public:
     float gpa;
     Student(string name  , int age , float gpa):Person(name , age){
        this-> gpa  = gpa;
     }
     void DisplayInfo(){
        cout<<gpa<<" "<<getName()<<" "<<getAge()<<" "<<endl;
     }
};
class Employee: public Person{
     public:
     int salary;
     Employee(string name  , int age  , int salary):Person(name ,  age){this->salary = salary;}
     void DisplayInfo(){
        cout<<salary<<" "<<getName()<<" "<<getAge()<<endl;
     }
};


int main(){
    Student s1("Ahmed" , 21 , 2.7);
    s1.DisplayInfo();
    Employee e1("Ali" , 22 , 7000000);
    e1.DisplayInfo();
}