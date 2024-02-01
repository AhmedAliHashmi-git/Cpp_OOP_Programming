// Create a base class named "Employee" with two data members named "name" and "salary". Create a derived class named "Manager" that adds a data member named "bonus" and a function named "get_total_salary()" that returns the sum of salary and bonus. Create objects of both classes and print their name and salary (and bonus for the Manager class).
// #include<iostream>
// using namespace std;
// class Employee{
//   public:
//   string name;
//   float salary;

//   Employee(string name = "not set" , float salary = 0.0):name(name) , salary(salary){}
// };
// class Manager:public Employee{
//     public:
//     float bonus;
//     void setBonus(float bonus){
//         this->bonus = bonus;
//     }
//     float getBonus(){
//         return bonus;
//     }
//     Manager(string name = "still not set" , float salary = 0.0 ):Employee(name , salary ){}
//     float getTotalBonus(){
//          return  bonus+salary;
//     }

// };
// int main(){
//        Manager mana("Ali" , 25000.0);
//        mana.setBonus(5000.0);
//        cout<<"Name- "<<mana.name<<endl;
//        cout<<"Salary- "<<mana.salary<<endl;
//        cout<<"Bonus- "<<mana.getBonus()<<endl;
//        cout<<"After Adding bounus to salary- "<<mana.getTotalBonus();

// }

// Create a base class named "Shape" with a pure virtual function named "area()". Create two derived classes named "Circle" and "Rectangle". The Circle class should have a constructor that takes one argument to initialize the radius, and a function named "area()" that returns the area of the circle. The Rectangle class should have a constructor that takes two arguments to initialize the width and height, and a function named "area()" that returns the area of the rectangle. Create objects of both classes and call their area() functions.


// #include <iostream>

// class Shape {
// public:
//     virtual double area() = 0; // pure virtual function
// };

// class Circle : public Shape {
// private:
//     double radius;
// public:
//     Circle(double r) : radius(r) {}
//     double area() {
//         return 3.14159 * radius * radius;
//     }
// };

// class Rectangle : public Shape {
// private:
//     double width, height;
// public:
//     Rectangle(double w, double h) : width(w), height(h) {}
//     double area() {
//         return width * height;
//     }
// };

// int main() {
//     Circle c(3.0);
//     std::cout << "Area of circle with radius 3.0 is: " << c.area() << std::endl;

//     Rectangle r(4.0, 5.0);
//     std::cout << "Area of rectangle with width 4.0 and height 5.0 is: " << r.area() << std::endl;

//     return 0;
// }


//       Create a Person base class with name and age as private members. Create a Student derived class from Person with rollNumber as a private member. Implement constructors for both classes and a function in Student to display all the information.
#include<iostream>
using namespace std;

class Person{
    private:
    string name;
    int age;

    public:
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }

    void setAge(int age)
    {
        this->age = age;
    }
    int getAge(){
        return age;
    }
    Person(string name , int age) : name(name) , age(age){}
};

class Student : public Person{
    private:
    int rollNumber;

    public:
    Person person;
    void setRollNumber(int rollNumber){
        this->rollNumber = rollNumber;
    }
    int getRollNumber(){
        return rollNumber;
    }
    Student(int rollNumber) : rollNumber(rollNumber){}
    void Display(){
      cout<<"Name- "<< person.getName()<<endl;
      cout<<"Age- "<<person.getAge()<<endl;
      cout<<"Roll Number- "<<rollNumber<<endl;
    }
};

int main(){
    Student stu(1);
    Person per("Ali" , 15);
}