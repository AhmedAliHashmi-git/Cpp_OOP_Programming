#include<iostream>
#include<string>
using namespace std;
class student{
           private:
                 
           string name;
           int age;
           int father_income;
           public:


           void setName{
            this->name=name;
                std.ForStudentScholarships();

           }
           string getName(){
            return name;
             

           }


          void setAge{
            this->age=age;
          std.ForStudentScholarships();

          }
          int getAge(){
            return age;
          }


          void setFather_Income{
            this->father_income=father_income;
                std.ForStudentScholarships();

          }
          int getFather_Income(){
            return father_income;
          }
            void ForStudentScholarships(){
                if(income<30000)
                {
                    cout<<"Student "<<name<<" got a Scholarships";
                }
                else{
                    cout<<"Student "<<name<<" did'nt got a Scholarships!!!";
                }
            }
};


int main(){
     student std= student("Hamza" , 18 , 28000);
}