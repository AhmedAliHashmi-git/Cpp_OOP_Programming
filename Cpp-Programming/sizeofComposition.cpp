#include <iostream>
#pragma pack(1)
using namespace std;

class Animal {
public:
    Animal() : age_(0) {}
private:
    int age_;
};

class Dog : public Animal {
public:
    Dog();
private:
  string d; int a;char b;
};

int main() {
    cout << "Sizse of Animal object: " << sizeof(Animal) << " bytes" << endl;
    cout << "Size of Dog object: " << sizeof(Dog) << " bytes" << endl;
    return 0;
}
// int main(){
//    double ali_;
//    cout<<sizeof(ali_);
// }

// #include<iostream>
// using namespace std;
// struct abc{
//    char a;
//    char d;
//    int b;
   
// };
// int main(){
//    cout<<sizeof(abc);
// }