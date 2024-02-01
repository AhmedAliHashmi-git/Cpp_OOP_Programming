#include<iostream>
using namespace std;
class Information{
	public:
     string Name;
	 string Semester;
	 float GPA;
	 int Roll_No;
     void Student(){
		cout<<"Name - "<<Name<<endl;
		cout<<"Semester"<<Semester <<endl;
		cout<<"GPA"<<GPA<<endl;
		cout<<"Roll No"<<Roll_No<<endl;
	 }
	 Information(string name , string semester  ,  float gpa  ,  int roll_no)
	 {
		Name=name;
		Semester=semester;
		GPA=gpa;
		Roll_No=roll_no;
	 }
};
int main(){
     Information Student1=Information("Hashmi" , "Second" , 2.69 , 9245);
	Student1.Student();
}