#include<iostream>
using namespace std;
class Empolyee{
    private:
      string Name;
      string Company;
      int Age;
      public:
      void setName(string name){//setter
        Name=name;
      }


      string getName(){//getter
        return Name;
      }


      void setCompany(string company){//setter
      Company=company;
      }


      string getCompany(){//getter
      return Company;
      }
       
       void setAge(int age){//setter
       Age=age;
       }

      int getAge(){
        return Age;
      }
};
int main(){
    Empolyee Empolyee1;
    Empolyee1.setName("Hashmi");
    Empolyee1.setCompany("Amazon");
    Empolyee1.setAge(21);
    cout<<Empolyee1.getName()  << "is"   << Empolyee1.getAge()   <<   "year old and he work in "   <<  Empolyee1.getCompany()  <<    "Company"   <<endl;  
}