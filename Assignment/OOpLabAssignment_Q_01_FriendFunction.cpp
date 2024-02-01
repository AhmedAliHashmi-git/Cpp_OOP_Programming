#include <iostream>
using namespace std;

class Rectangle2;
class Rectangle3;
class Rectangle4;

class Rectangle1 {
private:
    int length;
    int breadth;

public:
    Rectangle1(int l, int b) {
        length = l;
        breadth = b;
    }

    friend void sum(Rectangle1, Rectangle2, Rectangle3, Rectangle4);
};

class Rectangle2 {
private:
    int length;
    int breadth;

public:
    Rectangle2(int l, int b) {
        length = l;
        breadth = b;
    }

    friend void sum(Rectangle1, Rectangle2, Rectangle3, Rectangle4);
};

class Rectangle3 {
private:
    int length;
    int breadth;

public:
    Rectangle3(int l, int b) {
        length = l;
        breadth = b;
    }

    friend void sum(Rectangle1, Rectangle2, Rectangle3, Rectangle4);
};

class Rectangle4 {
private:
    int length;
    int breadth;

public:
    Rectangle4(int l, int b) {
        length = l;
        breadth = b;
    }

    friend void sum(Rectangle1, Rectangle2, Rectangle3, Rectangle4);
};

void sum(Rectangle1 obj1, Rectangle2 obj2, Rectangle3 obj3, Rectangle4 obj4) {
    int total_length = obj1.length + obj2.length + obj3.length + obj4.length;
    int total_breadth = obj1.breadth + obj2.breadth + obj3.breadth + obj4.breadth;

    cout << "\t\t     Length   Breadth" << endl;
    cout << "Rectangle1 :\t\t" << obj1.length << "\t" << obj1.breadth << endl;
    cout << "Rectangle2 :\t\t" << obj2.length << "\t" << obj2.breadth << endl;
    cout << "Rectangle3 :\t\t" << obj3.length << "\t" << obj3.breadth << endl;
    cout << "Rectangle4 :\t\t" << obj4.length << "\t" << obj4.breadth << endl;
    cout << "------------------------------------------------\n";
    cout << "       Sum :\t       " << total_length << "\t" << total_breadth << endl;
    cout << "------------------------------------------------\n";
}

int main() {
    Rectangle1 obj1(5, 3);
    Rectangle2 obj2(2, 6);
    Rectangle3 obj3(4, 6);
    Rectangle4 obj4(2, 5);

    sum(obj1, obj2, obj3, obj4);

    return 0;
}
