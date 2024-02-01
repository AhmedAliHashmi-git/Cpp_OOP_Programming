#include<iostream>
#include<string>
using namespace std;

//..class string.
class String {
    private: // .. Access modifier (Private)
    //..members.
    string name;
    int age;
    float cgpa;
public://.. Access modifier (public)
    
    String(string n , int a , float c) : name(n) , age(a) , cgpa(c){}//..Constructor.
    //..Copy Constructor
    String(const String& other) : name(other.name) , age(other.age) , cgpa(other.cgpa){}
    //..getters
    string getName()const{
    return name;
}
    int getAge(){
        return age;
    }
    float getCGPA(){
        return cgpa;
    }
};


int main() {
    //Dynamic array
    String* s1;
    s1 = new String("Hello I am Ahmed Ali Hashmi" , 21 , 2.8f);//..calling constructor
    String* s2(s1);//..copying 
    cout << s2->getName() << endl<< s2->getAge() <<endl << s2->getCGPA()<<endl;
    cout<< s1->getName()<<endl<< s1->getAge() <<endl << s1->getCGPA()<<endl;
    delete s1 , s2;

    return 0;
}