#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}

    void display(string op) {
        cout << real << " " <<op<<" "<< imag << "i" << endl;
    }

    int getReal()  {
        return real;
    }

    int getImag()  {
        return imag;
    }
};

class Operations {
public:
     static Complex add( Complex& c1,  Complex& c2) {
        int realSum = c1.getReal() + c2.getReal();
        int imagSum = c1.getImag() + c2.getImag();
        return Complex(realSum, imagSum);
    }

    static  Complex subtract( Complex& c1,  Complex& c2) {
        int realDiff = c1.getReal() - c2.getReal();
        int imagDiff = c1.getImag() - c2.getImag();
        return Complex(realDiff, imagDiff);
    }
};

int main() {
    Complex c1(2, 7);
    Complex c2(4, 5);

    Complex sum = Operations::add(c1, c2);
    Complex diff = Operations::subtract(c1, c2);

    cout << "Sum: ";
    sum.display("+");

    cout << "Difference: ";
    diff.display("-");

    return 0;
}
