#include <iostream>
using namespace std;

class Boat
{
public:
    int boatLength;
    Boat(int boatLength) : boatLength(boatLength) {}
    void Swim()
    {
        cout << "I am Swimming " << endl;
    }
};

class Plane
{
public:
    int maxAltitude;
    Plane(int maxAltitide) : maxAltitude(maxAltitide) {}
    void Fly()
    {
        cout << "I am flying " << endl;
    }
};

class Skimmer : public Boat, public Plane
{
private:
    int numPassenger;
    string skimmerName;

public:
    Skimmer(int boatLength, int maxAltitude, int numPassenger, string skimmerName) : numPassenger(numPassenger), skimmerName(skimmerName), Boat(boatLength), Plane(maxAltitude) {}
    void SwimAndFly()
    {
        Boat::Swim();
        Plane::Fly();
    }
    void Display()
    {
        cout << "Skimmer Name: " << skimmerName << " Length: " << boatLength << "ft,"
             << "Max Altitude: " << maxAltitude << "ft,"
             << " Passenter: " << numPassenger << endl;
        SwimAndFly();
    }
};

int main()
{
    Skimmer skimmer(40, 13000, 2, "Swim and Fly");
    skimmer.Display();
}