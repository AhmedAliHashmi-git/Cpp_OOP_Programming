#include<iostream>
using namespace std;
class student{
    private:
    //   This portion is not accessable because it is private.
     string name;
     string address;
     int age;
     float gpa;

     public:
    // This portion is public so everyone can access it through this they can access private portion.

     void setName(string name)//This is called setter.
     {
        this->name=name;
     }
     string getName()//This is called getter.
     {
        return name;
     }
     void setAddress( string address)
     {
        this-> address=address;
     }
     string getAddress()
     {
        return address;
     }
     void setAge(int age){
        this->age=age;
     }
     int getAge()
     {
        return age;
     }
     void setGpa(float gpa)
     {
        this->gpa=gpa;
     }
    float getGpa(){
        return gpa;
    }
};
int main(){
    student Student1;
    Student1.setName("Hashmi");
    Student1.setAddress("kashmir colony Askari Cement Wah");
    Student1.setAge(21);
    Student1.setGpa(3.4);
    cout<<"The name of the student is "<<Student1.getName()<<endl<<"The address of the student is "<<Student1.getAddress()<<
    endl<<"The age of the student is "<<Student1.getAge()<<endl<<"The GPA of the student is "<<Student1.getGpa()<<endl;

}