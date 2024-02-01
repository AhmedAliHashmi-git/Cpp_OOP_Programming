#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string empName;
    int empNumber;

public:
    Employee(string empName, int empNumber) {
        this->empName = empName;
        this->empNumber = empNumber;
    }

    string getEmpName() const {
        return empName;
    }

    int getEmpNumber() const {
        return empNumber;
    }

    void putData() const {
        cout << "Employee name: " << empName << endl;
        cout << "Employee number: " << empNumber << endl;
    }

};

class Scientist : public Employee {
private:
    int publications;

public:
    Scientist(string empName, int empNumber, int publications)
        : Employee(empName, empNumber) {
        this->publications = publications;
    }

    int getPublications() const {
        return publications;
    }

    void putData() const {
        Employee::putData();
        cout << "Publications: " << publications << endl;
    }

};

class Programmer : public Employee {
private:
    double salary;
    string expertise;

public:
    Programmer(string empName, int empNumber, double salary, string expertise)
        : Employee(empName, empNumber) {
        this->salary = salary;
        this->expertise = expertise;
    }

    double getSalary() const {
        return salary;
    }

    string getExpertise() const {
        return expertise;
    }

    void putData() const {
        Employee::putData();
        cout << "Salary: " << salary << endl;
        cout << "Expertise: " << expertise << endl;
    }

};

class Manager : public Employee {
private:
    string title;
    double clubDues;

public:
    Manager(string empName, int empNumber, string title, double clubDues)
        : Employee(empName, empNumber) {
        this->title = title;
        this->clubDues = clubDues;
    }

    string getTitle() const {
        return title;
    }

    double getClubDues() const {
        return clubDues;
    }

    void putData() const {
        Employee::putData();
        cout << "Title: " << title << endl;
        cout << "Club Dues: " << clubDues << endl;
    }

};

int main() {
    // Example usage
    string empName;
    int empNumber;
    int publications;
    double salary;
    string expertise;
    string title;
    double clubDues;

    // Input values for Employee
    cout << "Enter employee name: ";
    getline(cin, empName);
    cout << "Enter employee number: ";
    cin >> empNumber;
    cin.ignore(); // ignore newline character

    // Create Employee object
    Employee emp(empName, empNumber);
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    // Output Employee data
    emp.putData();

    // Input values for Scientist
    cout << "Enter number of publications: ";
    cin >> publications;

    // Create Scientist object
    Scientist sci(empName, empNumber, publications);
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    // Output Scientist data
    sci.putData();

    // Input values for Programmer
    cout << "Enter salary: ";
    cin >> salary;
    cin.ignore(); // ignore newline character
    cout << "Enter area of expertise: ";
    getline(cin, expertise);

    // Create Programmer object
    Programmer prog(empName, empNumber, salary, expertise);
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    // Output Programmer data
    prog.putData();

    // Input values for Manager
    cout << "Enter title: ";
    getline(cin,title); 

    cout << "Enter club dues: ";
    cin >> clubDues;

    // Create Manager object
    Manager mgr(empName, empNumber, title, clubDues);
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    // Output Manager data
    mgr.putData();

return 0;

}