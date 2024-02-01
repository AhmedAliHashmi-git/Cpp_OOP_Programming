// #include <iostream>
// #include <string>
// using namespace std;

// class Person {
// protected:
//     string name;
//     int age;
// public:
//     Person(string n, int a) : name(n), age(a) {}
//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };

// class Student : public Person {
// private:
//     int studentID;
// public:
//     Student(string n, int a, int id) : Person(n, a), studentID(id) {}
//     void display() {
//         Person::display();
//         cout << "Student ID: " << studentID << endl;
//     }
// };

// class Employee : public Person {
// protected:
//     string company;
// public:
//     Employee(string n, int a, string c) : Person(n, a), company(c) {}
//     void display() {
//         Person::display();
//         cout << "Company: " << company << endl;
//     }
// };

// class StudentEmployee : public Student, public Employee {
// private:
//     double salary;
// public:
//     StudentEmployee(string n, int a, int id, string c, double s) : 
//         Student(n, a, id), Employee(n, a, c), salary(s) {}
//     void display() {
//         Student::display();
//         cout << "Company: " << company << endl;
//         cout << "Salary: $" << salary << endl;
//     }
// };

// int main() {
//     StudentEmployee se("John Doe", 21, 12345, "Acme Corp.", 50000.0);
//     se.display();
//     return 0;
// }



// Create a class Animal with member functions eat() and sleep(). Create two derived classes Bird and Fish. Use multiple inheritance to create a class Penguin that is derived from both Bird and Fish, and contains a member function swim().


#include<iostream>
using namespace std;

class Animal{
    protected:

    virtual string Eat() = 0;
    virtual string Sleep() = 0;
};

class Bird : public Animal{
    string eat; 
    string sleep;
    public:
    Bird(string eat , string sleep):eat(eat),sleep(sleep){}
    string Eat(){
        cout<<eat<<endl;
    }

    string Sleep(){
        cout<<sleep()<<endl;
    }
    
};


class Fish: public Animal{
    string eat; 
    string sleep;
    public:
    Bird(string eat , string sleep):Bird(eat , sleep),eat(eat),sleep(sleep){}
    string Eat(){
        cout<<eat<<endl;
    }

    string Sleep(){
        cout<<sleep()<<endl;
    }
    
};
class Penguin: public Fish , public Bird{
    string eat; 
    string sleep;
    public:
    
    Penguin(string eat , string sleep ):Fish(eat , sleep),eat(eat),sleep(sleep){}
    void Sw
};


int main(){

}