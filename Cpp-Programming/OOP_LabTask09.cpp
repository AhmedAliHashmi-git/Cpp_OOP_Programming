#include <iostream>
#include <string>
using namespace std;

class ContactBook {
public:
    void PrintA(string name, int size, int month) {
        if(month == 2){
            for (int i = 0; i < size; i++) {
            cout << "Contact with birthday in month : " << month << endl;
            cout << name << endl;
        }
        
            
        }
    }
};

class DateOfBirth {
private:
    int date;
    int month;
    int year;
public:
    DateOfBirth() {
        date = 0;
        month = 0;
        year = 0;
    }

    void setDate(int date) {
        this->date = date;
    }

    int getDate() {
        return date;
    }

    void setMonth(int month) {
        this->month = month;
    }

    int getMonth() {
        return month;
    }

    void setYear(int year) {
        this->year = year;
    }

    int getYear() {
        return year;
    }
    ContactBook obj2;
    void Print(string name, int size) {
    cout << "Date of Birth- " << date << "/" << month << "/" << year << endl;
    obj2.PrintA(name, size, month);
    }
};

class Contact {
private:
    string name;
    string phoneNumber;
    string email;
    DateOfBirth obj;
public:
    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }

    void setPhoneNumber(string phoneNumber) {
        this->phoneNumber = phoneNumber;
    }

    string getPhoneNumber() {
        return phoneNumber;
    }

    void setEmail(string email) {
        this->email = email;
    }

    string getEmail() {
        return email;
    }

    void AddContact(string name, string phoneNumber, string email, int date, int month, int year) {
        this->name = name;
        this->phoneNumber = phoneNumber;
        this->email = email;
        obj.setDate(date);
        obj.setMonth(month);
        obj.setYear(year);
    }

    void PrintContact() {
        cout << "Name: " << name << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Email: " << email << endl;
        obj.Print(name, 1);

    }
    
};

int main() {
    int size = 2;
    Contact obj[size];

    for (int i = 0; i < size; i++) {
        string name, phoneNumber, email;
        int date, month, year;

        cout << "Enter your Name: ";
        cin >> name;

        cout << "Enter Phone Number: ";
        cin >> phoneNumber;

        cout << "Enter Email: ";
        cin >> email;

        cout << "Enter Date: ";
        cin >> date;

        cout << "Enter Month: ";
        cin >> month;

        cout << "Enter Year: ";
        cin >> year;
        obj[i].AddContact(name, phoneNumber, email, date, month, year);
        
    }

    for (int i = 0; i < size; i++) {
        obj[i].PrintContact();
    }

    return 0;
}
