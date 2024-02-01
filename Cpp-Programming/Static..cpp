#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    string address;
    public:
    static int count;
    static void print();
    Person(string name , int age , string address){
        this -> name = name;
        this ->age = age;
        this ->address = address;
        count++;
    }
    ~Person(){
        count--;
        if(count == 0){
            cout<<"Object Distroyed";
        }
        
    }
    void Display(){
        cout<<"Name- "<<name<<endl;
        cout<<"Age- "<<age<<endl;
        cout<<"Address- "<<address<<endl;
        
    }
    

};

int Person:: count = 0;
void Person::print(){
cout<<"Count- "<<count<<endl<<endl;
}

int main(){
      Person obj1("Hashmi" , 21  , "kashmir") , obj2("ali" , 20  ,  "Karachi");
      obj1.Display();
      obj2.Display();
      Person::print();
      return 0;

}