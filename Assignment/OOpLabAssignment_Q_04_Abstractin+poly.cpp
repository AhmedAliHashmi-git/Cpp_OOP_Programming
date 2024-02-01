#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

class Shapes{
    public:
    //..pure virtual function.
    virtual void Area() = 0 ;
    //..Destruction
    virtual ~Shapes(){}
};

class Shape2D : public Shapes{
    protected:
    double side;
    public:
    Shape2D(double s) : side(s){}
    virtual void Area() override {}
    virtual ~Shape2D(){}
};

//..3D Shape Class
class Shape3D : public Shapes{
    protected:
    double length, width, height;
    public:
    Shape3D(double l, double w, double h) : length(l), width(w), height(h){}
    virtual void Area() override {}
    virtual void volume() {}
    virtual ~Shape3D(){}
};

///..Circle Class
class Circle : public Shape2D{
    public:
    Circle(double r) : Shape2D(r){}
    void Area() override {
        cout << "Area of Circle: " << 3.14 * side * side << endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }
    ~Circle(){}
};

//..Square Class
class Square : public Shape2D{
    public:
    Square(double s) : Shape2D(s){}
    void Area() override {
        cout << "Area of Square: " << side * side << endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }
    ~Square(){}
};

//..Cube Class
class Cube : public Shape3D{
    public:
    Cube(double l, double w, double h) : Shape3D(l, w, h){}
    void Area() override {
        cout << " Area of Cube: " << 2 * (length*width + width*height + height*length) << endl;
    }
    virtual void volume() override {
        cout << "Volume of Cube: " << length * width * height << endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }
    ~Cube(){}
};

//..Pyramid Class
class Pyramid : public Shape3D{
    public:
    Pyramid(double b, double h, double l) : Shape3D(l, b, h){}
    void Area() override {
        cout << "Surface Area of Pyramid: " << length*width + length*sqrt(pow(width/2,2)+pow(height,2)) + width*sqrt(pow(length/2,2)+pow(height,2)) << endl;
    }
    virtual void volume() override {
        cout << "Volume of Pyramid: " << (length * width * height)/3 << endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }
    ~Pyramid(){}
};

int main(){
    Shapes *s1, *s2;           // declare pointers to Shapes class
    Shape3D *s3, *s4;          // declare pointers to Shape3D class
    s1 = new Circle(2.0);      // create a Circle object and assign to s1 pointer
    s2 = new Square(4.0);      // create a Square object and assign to s2 pointer
    s3 = new Cube(3.0, 3.0, 3.0);  // create a Cube object and assign to s3 pointer
    s4 = new Pyramid(3.0, 4.0, 5.0);  // create a Pyramid object and assign to s4 pointer
    s1->Area();                // call Area() function for Circle object
    s2->Area();                // call Area() function for Square object
    s3->Area();                // call Area() function for Cube object
    s3->volume();              // call volume() function for Cube object
    s4->Area();                // call Area() function for Pyramid object
    s4->volume();              // call volume() function for Pyramid object
    delete s1, s2, s3, s4;     // delete objects to free up memory
    return 0;
}


