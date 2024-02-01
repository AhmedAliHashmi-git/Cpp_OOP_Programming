// 1.Write a  traffic light whose constant red green yellow take one parameter the duration of the light write a program to test the traffic light    so that it display constant and its duration. 

// Drivers are concerned with the mileage their automobiles get. One driver has
// kept track of several trips by recording the miles driven and gallons used for each thankful. Develop
// a c++ application that will input the miles driven and gallons used (both as integers) for each trip.
// The program should calculate and display the miles per gallon obtained for each trip and print the
// combined miles per gallon obtained for all trips up to this point. All averaging calculations should
// produce floating-point

// (Complex Numbers) Create a class called Complex for performing arithmetic with complex
// numbers. Complex numbers have the form
// realPart + imaginaryPart * i
// where i is sqrt–1
// Write a program to test your class. Use floating-point variables to represent the private data of the
// class. Provide a constructor that enables an object of this class to be initialized when it’s declared.
// Provide a no-argument constructor with default values in case no initializers are provided. Provide
// public methods that perform the following operations:
// a) Add two Complex numbers: The real parts are added together and the imaginary parts
// are added together.
// b) Subtract two Complex numbers: The real part of the right operand is subtracted from
// the real part of the left operand, and the imaginary part of the right operand is subtracted
// from the imaginary part of the left operand.
// c) Print Complex numbers in the form (realPart, imaginaryPart).


#include <iostream>
using namespace std;
class Complex {
private:
    double realPart;
    double imaginaryPart;
public:
    Complex(double r = 0, double i = 0) : realPart(r), imaginaryPart(i) {}

    Complex add( Complex& num)  {
        return Complex(realPart + num.realPart, imaginaryPart + num.imaginaryPart);
    }

    Complex subtract( Complex& num)  {
        return Complex(realPart - num.realPart, imaginaryPart - num.imaginaryPart);
    }

    void print() const {
        cout << "(" << realPart << ", " << imaginaryPart << ")\n";
    }
};

int main() {
    Complex c1(1, 2);
    Complex c2(3, 4);
    
    Complex sum = c1.add(c2);
    Complex diff = c1.subtract(c2);
    
    cout << "c1 = ";
    c1.print();
    cout << "c2 = ";
    c2.print();
    cout << "c1 + c2 = ";
    sum.print();
    cout << "c1 - c2 = ";
    diff.print();
    
    return 0;
}

