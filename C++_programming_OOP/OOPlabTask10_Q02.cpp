#include<iostream>
#include<string.h>
using namespace std;

class Animal{
    protected:
    string  name , color;
    public:
    Animal(string n , string c) : name(n) , color(c){}
    virtual void Display() = 0;
    ~Animal(){}
};

class Deer : public Animal{
  private:
  bool hasAntlers;
  public:
  Deer(string n , string c , bool h): Animal(n , c) , hasAntlers(h){}
  void Display()override
  {
    if(hasAntlers == 1){
        cout<<"The name of Deer is "<<name<<endl<<"The color of the deer is "<<color<<endl<<"Dear has Antler"<<endl;
    }
    else{
        cout<<"The name of Deer is "<<name<<endl<<"The color of the deer is "<<color<<endl<<"Deer has no Antler"<<endl;
    }
    
  }
 };
 class Zebra : public Animal
 {
    private:
    string stripe_pattern;
    public:
    Zebra(string n , string c, string s) : Animal(n , c) , stripe_pattern(s){}
    void Display()override{
        cout<<"The Name of the zebra is - "<<name<<endl<<"The color of the Zebra is - "<<color<<endl<<"The Pattern on is body is - "<<stripe_pattern<<endl<<endl;
    }


 };
 void DisplayAll(Animal *animal[] , int num){ 
    for(int i = 0 ; i < num ; i++){
        animal[i]->Display();
        cout<<endl;
    }

 }

 int main(){
    Animal* animal[2];
    animal[0] = new Deer("Jasper" , "Brown" , 1);
    animal[1] = new Zebra("Grevy's Zebra" , "zebras is white, but they have black stripes" , "Shadow Pattern");
    DisplayAll(animal , 3);

    for(int i = 0 ; i < 2 ; i++){
          delete animal[i];
          animal[i] = nullptr;
    }
    return 0;
 }