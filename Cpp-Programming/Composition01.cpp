#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    std::string name;
    int grade;
public:
    Student() {
        name = "";
        grade = 0;
    }
    void setName(std::string n) {
        name = n;
    }
    void setGrade(int g) {
        grade = g;
    }
    std::string getName() {
        return name;
    }
    int getGrade() {
        return grade;
    }
};

class SchoolClass {
private:
    Student* students;
    int size;
public:
    string name;
    int grade;
    SchoolClass(int s) {
        size = s;
        students = new Student[size];
        for (int i = 0; i < size; i++) {
            cout<<"Enter the name: ";
            cin>>name;
            students[i].setName(name);
            cout<<"Enter the grade: ";
            cin>>grade;
            students[i].setGrade(grade);
        }
    }
    ~SchoolClass() {
        delete[] students;
    }
    void printStudents() {
        for (int i = 0; i < size; i++) {
            std::cout << "Student " << i+1 << ":\nName: " << students[i].getName() << "\nGrade: " << students[i].getGrade() << "\n\n";
        }
    }
};

int main() {
    SchoolClass myClass(3);
    myClass.printStudents();
    return 0;
}
