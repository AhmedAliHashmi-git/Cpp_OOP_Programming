// Create a class called "Person" with members for name, age, and gender. Then create two classes called "Teacher" and "Student" that inherit from "Person" and have their own member variables for subject and major, respectively. Finally, create a class called "TeachingAssistant" that inherits from both "Teacher" and "Student" and has a member variable for office hours. Implement constructors for each class and a function in "TeachingAssistant" that displays all of its member variables

#include<iostream>
using namespace std;

class Person{
    private:
    string name;
    int age;
    char gender;

    public:

    Person(string n , int a , char g): name(n) , age(a) , gender(g){}
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    char getGender(){
        return gender;
    }
    
};
class Teacher: virtual public Person{
    private:
    string major;
    
    public:
    Teacher(string n , int a , char g , string m): Person(n , a, g) ,major(m) {}
    string getMajor(){
        return major;
    }
};

class Student: virtual public Person{
   private:
   string subject;
   public:

   Student(string n , int a , char g ,  string sub ): Person(n , a , g) , subject(sub){}
   string getSub(){
    return subject;
   }
};

class TeachingAssignment : public Teacher , public Student{
    private:
    int officeHour;
    public:

    TeachingAssignment(string n , int a , char g , string sub , string m , int f): Person(n , a , g) , Student(n,a,g,sub) , Teacher(n,a,g,m),officeHour(f){}

    void Display(){
        cout<<"Name- "<<getName()<<endl<<"Age- "<<getAge()<<endl<<"Gender- "<<getGender()<<endl<<"Student Sub- "<<getSub()<<endl<<"Teacher major- "<<getMajor()<<endl<<"Office Work- "<<officeHour;
    }

};
int main(){
    TeachingAssignment TA("Ali" , 22 , 'M' , "Computer Science" , "Math" , 8);
    TA.Display();
    return 0;
 
}