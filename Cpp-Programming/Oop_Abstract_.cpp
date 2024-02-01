#include<iostream>
#include<string>
using namespace std;
class AbstractEmpolyee{
    virtual void AskForPromotion()=0;
};
class  AbstractBoy{
     virtual void ForRecommendation()=0;

};
class Employee:AbstractEmpolyee{
    public:
    string name;
    int age;
    string previous_company;
    float university_gpa;
    void Info(){
        cout<<"Name - "<<name<<endl;
        cout<<"Age - "<<age<<endl;
        cout<<"previous_company - "<<previous_company<<endl;
        cout<<"university_gpa - "<<university_gpa;
    }
    Employee(string Name, int Age, string Previous_Company, float University_Gpa)
    {
        name=Name;
        age=Age;
        previous_company=Previous_Company;
        university_gpa=University_Gpa;
    }
    void AskForPromotion(){
        if(age>=30){
            cout<<name<<": "<<"got Promoted!"<<endl;
        }
        else 
        {
            cout<<name<<": "<<"No Promotion for you"<<endl;
   
        }
    }
    void ForRecommendation(){
        if(university_gpa>3.00)
        {
           cout<<"Congratulation "<<name<<" you got Recommend";
        }
        else
        {
            cout<<"Not Recommended";
        }
    }
    
};
int main(){
    Employee Emp1= Employee("hashmi" , 35 , "Amazon" , 3.4);
    Emp1.AskForPromotion();
    Emp1.ForRecommendation();
      
}