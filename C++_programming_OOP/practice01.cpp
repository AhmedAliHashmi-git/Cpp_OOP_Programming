#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {}

    // Overloaded addition operator
    Fraction operator+(const Fraction& other) const {
        int newNumerator = (numerator * other.denominator) + (other.numerator * denominator);
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    // Overloaded subtraction operator
    Fraction operator-(const Fraction& other) const {
        int newNumerator = (numerator * other.denominator) - (other.numerator * denominator);
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    // Overloaded multiplication operator
    Fraction operator*(const Fraction& other) const {
        int newNumerator = numerator * other.numerator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    // Overloaded division operator
    Fraction operator/(const Fraction& other) const {
        int newNumerator = numerator * other.denominator;
        int newDenominator = denominator * other.numerator;
        return Fraction(newNumerator, newDenominator);
    }

    // Function to simplify the fraction
    void simplify() {
        int gcdValue = gcd(numerator, denominator);
        numerator /= gcdValue;
        denominator /= gcdValue;
    }

    // Function to calculate the greatest common divisor (GCD)
    int gcd(int a, int b) const {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    // Function to print the fraction
    void print() const {
        cout << numerator << "/" << denominator;
    }
};

int main() {
    Fraction f1(3, 4);
    Fraction f2(1, 2);

    Fraction sum = f1 + f2;
    cout << "Sum: ";
    sum.print();
    cout << endl;

    Fraction difference = f1 - f2;
    cout << "Difference: ";
    difference.print();
    cout << endl;

    Fraction product = f1 * f2;
    cout << "Product: ";
    product.print();
    cout << endl;

    Fraction quotient = f1 / f2;
    cout << "Quotient: ";
    quotient.print();
    cout << endl;

    return 0;
}
