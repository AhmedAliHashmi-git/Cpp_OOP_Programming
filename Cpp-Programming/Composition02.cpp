// Create a class called "Person" that has data members for the person's name, age, and address. Then, create a class called "Student" that is composed of a Person object and has an additional data member for the student's grade point average (GPA).


#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;
    string address;

    // Constructor for Person class
    Person(string name, int age, string address) {
        this->name = name;
        this->age = age;
        this->address = address;
    }
};

class Student {
public:
    Person person;
    double gpa;

    // Constructor for Student class
    Student(string name, int age, string address, double gpa) : person(name, age, address) {
        this->gpa = gpa;
    }

    // Function to print the student's information
    void printInfo() {
        cout << "Name: " << person.name << endl;
        cout << "Age: " << person.age << endl;
        cout << "Address: " << person.address << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    // Create a student object and print their information
    Student student("John Doe", 20, "123 Main St", 3.5);
    student.printInfo();
    return 0;
}
