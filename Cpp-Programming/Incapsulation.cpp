#include<iostream>
using namespace std;
class Student{
       private:
       string Name;
       string Adress;
       float GPA;
       int Age;
       public:
       void setName(string name){//setter
       Name=name;
       }
       string getName()
       {//getter
        return Name;
       }

       void setAdress(string adress)
       {//setter
        Adress=adress;
       }
       string getAdress(){//getter
         return Adress;
       }
       void setGPA(float gpa)
       {//setter
          GPA=gpa;
       }
       float getGPA()
       {//getter
        return GPA;
       }
       void setAge(int age)
       {
        if(age>=18)
        Age=age;
       }
       int getAge(){
        return Age;
       }


};
int main()
{
      Student Info;
      Info.setName("Hashmi");
      Info.setAdress("Kashmir Colony");
      Info.setGPA(2.69);
      Info.setAge(30);
      cout<<"Name of the student is - "<<Info.getName()<<endl<<"He is - "<<Info.getAge()<<"Year old"<<endl<<"Adress of the student is - "<<Info.getAdress()<<endl<<"And GPA is - "<<Info.getGPA()<<endl;
}