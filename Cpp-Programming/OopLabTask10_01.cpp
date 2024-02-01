#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    string name;
    int age;

    Animal(string name, int age) : name(name), age(age) {}

    virtual void Speak() = 0;
};

class Bird : private Animal
{

private:
    int wingLength;

public:
    Bird(string name, int age, int winLen) : Animal(name, age), wingLength(winLen) {}

    void Speak()
    {
        cout << "My name is: " << name << " "
             << "My age is: " << age << endl;
        cout << "I am a bird i can sing.. " << endl;
    }
};

class Reptile : private Animal
{
private:
    string habital;

public:
    Reptile(string name, int age, string habital) : Animal(name, age), habital(habital) {}
    void Speak()
    {
        cout << "My name is: " << name << " "
             << "My age is: " << age << endl;
        cout << "I am a Reptile. I can creed.. " << endl;
    }
};

int main()
{
    Bird bird("Parrot", 2, 14);
    bird.Speak();
    Reptile reptile("Crocodile", 20, "Forest");
    reptile.Speak();
}