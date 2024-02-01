#include <iostream>
#include <string>
using namespace std;

class Brain {
private:
    int numNeurons;
    string region;

public:
    Brain(int neurons, string reg) : numNeurons(neurons), region(reg) {}

    int getNumNeurons() const { return numNeurons; }
    string getRegion() const { return region; }
};

class Leg {
private:
    int numBones;
    string side;

public:
    Leg(int bones, string s) : numBones(bones), side(s) {}

    int getNumBones() const { return numBones; }
    string getSide() const { return side; }
};

class Heart {
private:
    int heartRate;
    string size;

public:
    Heart(int rate, string s) : heartRate(rate), size(s) {}

    int getHeartRate() const { return heartRate; }
    string getSize() const { return size; }
};

class Person {
private:
    string name;
    int age;
    Brain* brain;
    Leg* leftLeg;
    Leg* rightLeg;
    Heart* heart;

public:
    Person(string n, int a, Brain* b, Leg* ll, Leg* rl, Heart* h) : 
        name(n), age(a), brain(b), leftLeg(ll), rightLeg(rl), heart(h) {}

    // getters
    string getName() const { return name; }
    int getAge() const { return age; }
    Brain* getBrain() const { return brain; }
    Leg* getLeftLeg() const { return leftLeg; }
    Leg* getRightLeg() const { return rightLeg; }
    Heart* getHeart() const { return heart; }

    // setters
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setBrain(Brain* b) { brain = b; }
    void setLeftLeg(Leg* ll) { leftLeg = ll; }
    void setRightLeg(Leg* rl) { rightLeg = rl; }
    void setHeart(Heart* h) { heart = h; }

    // functions
    void walk() {
        cout << name << " is walking using both legs.\n";}

    void think() {
        cout << name << " is thinking with the " << brain->getRegion() << " region of the brain.\n";}

    void pumpHeart() {
        cout << name << "'s heart is pumping at a rate of " << heart->getHeartRate()<< " beats per minute.\n";}
};

int main() {
    Brain b(100000000, "Crown");
    Leg ll(4, "left");
    Leg rl(4, "right");
    Heart h(75, "medium");
    Person p("Ahmed Ali Hashami", 25, &b, &ll, &rl, &h);

    p.walk();
    p.think();
    p.pumpHeart();

    return 0;
}