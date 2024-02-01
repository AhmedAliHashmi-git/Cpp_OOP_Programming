#include<iostream>
#include<string>
using namespace std;
class Manager;
class Scientist;
class Programmer;
class Empolyee{
   private:
   string empName;
   int empNum;

   public:
   virtual void getData(){
    cout<<"Enter the name of Empolyee : ";
    getline(cin , empName);
    cout<<"Enter the Number of the Empolyee : ";
    cin>>empNum;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

   }
    friend void Print(Empolyee , Manager , Scientist , Programmer);


   virtual void putData(){
    this-> empName = empName;
    this-> empNum = empNum;
   }
};

class Manager :  public Empolyee{
   private:
   char title;
   double clubDues;

   public:
    void getData(){
    cout<<"Enter the Title of the Empolyee : ";
    cin>>title;
    cout<<"How much Club dues : ";
    cin>>clubDues;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";


   }
   

   void putData(){
    this->title = title;
    this->clubDues = clubDues;
   }
    friend void Print(Empolyee , Manager , Scientist , Programmer);


};


class Scientist : public Empolyee{
   int publication;

   public:
   void getData(){
   cout<<"How many Publication  : ";
   cin>>publication;
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

   }
   friend void Print(Empolyee , Manager , Scientist , Programmer);

   void putData(){
    this->publication = publication;
   }
};

class Programmer : public Empolyee{
     private:
     double salary;
     string  experties;

     public:
     void getData(){
        cout<<"How much salary : ";
        cin>>salary;
        cin.ignore();
        cout<<"Enter programmer experties : ";
        getline(cin , experties);
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

     }
        friend void Print(Empolyee , Manager , Scientist , Programmer);

     void putData(){
        this->salary = salary;
        this->experties = experties;

     }
};
void Print(Empolyee e, Manager m, Scientist s , Programmer p){
    cout<<endl<<endl<<"Empolyee Name - "<<e.empName<<endl;
    cout<<"Empolyee Number - "<<e.empNum<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    cout<<"Title of the Empolee - "<<m.title<<endl;
    cout<<"Club Dues - "<<m.clubDues<<endl;
     cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    cout<<"Publication - "<<s.publication<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    cout<<"Programmer Salary - "<<p.salary<<endl;
    cout<<"Programmer Experties - "<<p.experties;


}

int main(){
    Empolyee e;
    Manager m;
    Scientist s;
    Programmer p;
    Empolyee *ptr;
    ptr = new Empolyee;
    ptr = &e;
    ptr->getData();
    ptr->putData();
    ptr = &m;
    ptr->getData();
    ptr->putData();
    ptr = &s;
    ptr->getData();
    ptr->putData();
    ptr = &p;
    ptr->getData();
    ptr->putData();
    Print(e , m , s , p);
}