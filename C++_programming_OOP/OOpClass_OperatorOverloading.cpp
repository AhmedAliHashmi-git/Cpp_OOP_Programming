#include <iostream>
using namespace std;

class Operators {
    private:
        int num1;
        int num2;
    public:
        Operators(int a, int b) : num1(a), num2(b) {}
        //1.Multiplication Overloading.
        Operators operator*(const Operators& op) {
            return Operators(num1 * op.num1, num2 * op.num2);
        }
        //2.Post Increment Overloading.
        Operators operator++(int) {
            Operators temp(*this);
            num1++;
            num2++;
            return temp;
        }
        //3.Post Decrement Overloading.
        Operators operator--(int) {
            Operators temp(*this);
            num1--;
            num2--;
            return temp;
        }
        //4.== Overloading.
        bool operator==(const Operators& op) const {
            return (num1 == op.num1) && (num2 == op.num2);
        }
        //5.XOR overloading.
        Operators operator^(const Operators& op) {
            return Operators(num1 ^ op.num1, num2 ^ op.num2);
        }

        int getNum1() const {
            return num1;
        }

        int getNum2() const {
            return num2;
        }
        //6.Stream extraction (>>).
        friend istream& operator>>(istream& input, Operators& obj);
};

istream& operator>>(istream& input, Operators& obj) {
    input >> obj.num1 >> obj.num2;
    return input;
}

int main() {
    Operators obj1(0, 0);
    Operators obj2(0, 0);

    cout << "Enter values for Object 1: ";
    cin >> obj1;

    cout << "Enter values for Object 2: ";
    cin >> obj2;

    if (obj1 == obj2) {
        cout << "They are equal." << endl;
    } else {
        cout << "They are not equal." << endl;
    }

    Operators result = obj1 * obj2;
    cout << "Result: " << result.getNum1() << " , " << result.getNum2() << endl;

    Operators obj3 = obj1++;
    cout << "Incremented value of Object 1 is: " << obj1.getNum1() << ", " << obj1.getNum2() << endl;

    Operators obj4 = obj2--;
    cout << "Decremented value of Object 2 is: " << obj2.getNum1() << ", " << obj2.getNum2() << endl;

    Operators result2 = obj1 ^ obj2;
    cout << "Result of XOR operation: " << result2.getNum1() << " , " << result2.getNum2() << endl;

    return 0;
}
