// #include <iostream>
// using namespace std;

// class Test {
//     int n;
// public:
//     Test(int n) : n(n) {}

//     Test operator<<(int shift) {
//         return Test(n << shift);
//     }

//     friend ostream& operator<<(ostream& output, const Test& t);
// };

// ostream& operator<<(ostream& output, const Test& t) {
//     output << t.n;
//     return output;
// }

// int main() {
//     Test t(5);
//     Test t2 = t << 2;
//     cout << t2 << endl;

//     return 0;
// }
// #include<iostream>
// #include<string.h>
// using namespace std;
// class Operators{
//     private:
//     int n1;
//     int n2;
//     int n3;
//     public:
//     Operators(int a , int b , int c) : n1(a) , n2(b) , n3(c){}
//     Operators(const Operators& other){
//         *this = other;
//     }

//     Operators& operator=(const Operators& other){
//         if(this == &other){
//             return *this;
//         }

//         n1 = other.n1;
//         n2 = other.n2;
//         n3 = other.n3;
//         return *this;
//     }
//     void Display(){
//         cout << n1 << " " << n2 << " " << n3 << endl;
//     }
//     friend ostream& operator<<(ostream& output , Operators obj);
// };
//    ostream& operator<<(ostream& output , Operators obj){
//     output<< obj.n1 <<" "<< obj.n2<<" " << obj.n3;
//     return output;
//    } 

// int main() {
//     Operators op(3, 4, 5);
//     Operators op2(op);
//     cout << "Copy Constructor: " << op2<<endl;
    
//     return 0;
// }


#include <iostream>
// #include<stdexcept>
using namespace std;
class MyArray {
private:
    int data[5];

public:
    int& operator[](int index){
        if(index < 0  ||  index >= 5){
             throw out_of_range("Index out of range");
        }
          return data[index];
    } 
};

int main() {
    MyArray arr;
    try{
    arr[2] = 42;  // Access and modify element at index 2

    std::cout << arr[2] << std::endl;  // Access element at index 2

    arr[10] = 99;  // Access out-of-bounds index
    }
    catch(out_of_range& e){
        cout<<"Exception: "<<e.what()<<endl;

    }

    return 0;
}
