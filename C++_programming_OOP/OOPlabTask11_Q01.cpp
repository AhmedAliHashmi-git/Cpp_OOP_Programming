#include <iostream>

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}

    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }

    friend Complex addComplex(Complex c1, Complex c2);
};

Complex addComplex(Complex c1, Complex c2) {
    int sumReal = c1.real + c2.real;
    int sumImag = c1.imag + c2.imag;
    return Complex(sumReal, sumImag);
}

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);

    Complex result = addComplex(c1, c2);

    result.display();

    return 0;
}
