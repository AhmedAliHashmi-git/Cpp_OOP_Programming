// #include<iostream>
// #include<iomanip>
// #include<string>
// using namespace std;
// struct student{
//    int idNum;
//    int scores[3];
//    int finalExam;
// };
// int main()
// {
//     student s1,s2;
//     s1.idNum = 1;
//     s1.scores[0] = 90; 
//     s1.scores[1] = 99;
//     s1.scores[2] = 45;
//     s1.finalExam = 34;
//     //  student 2
//     s2.idNum = 2;
//     s2.scores[0] = 80; 
//     s2.scores[1] = 89;
//     s2.scores[2] = 75;
//     s2.finalExam = 66;

//     cout<<"The id of 1st student is : "<<s1.idNum<<endl<<"The scores of s1 student at 0 is : "<<s1.scores[0]<<endl
//     <<"The scores of s1 student at 1 is : "<<s1.scores[1]<<endl<<"The scores of s1 student at 1 is : "<< s1.scores[2]<<endl
//     <<"The result of final exam is : "<<s1.finalExam<<endl;
//     cout<<string(70 , '-')<<""<<endl;
//     cout<<"The id of 2st student is : "<<s2.idNum<<endl<<"The scores of s2 student at 0 is : "<<s2.scores[0]<<endl
//     <<"The scores of s2 student at 1 is : "<<s2.scores[1]<<endl<<"The scores of s2 student at 1 is : "<< s2.scores[2]<<endl
//     <<"The result of final exam is : "<<s2.finalExam<<endl;

// }







  
// hard code array



// #include<iostream>
// #include<iomanip>
// #include<string>
// using namespace std;
// struct point{
//     int x,y;
// };
// int main()
// {
//     point s[10];
//     s[0].x = 10;
//     s[1].y = 20;   
//     cout<<s[0].x<<endl<<s[1].y<<endl;
// }







//   Array using loop

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct student{
    string name;
    int idNum;
    float gpa;
};
int main()
{
      student s[3];

      
      for(int i=0 ; i<3  ;  i++) 
      {
        cout<<"Enter the Name of student "<<i+1<<" : ";
        // cin>>s[i].name;
        cin.ignore();                                                                                          
        getline(cin , s[i].name);// I have to search on it.
        
        cout<<"Enter the id of student "<<i+1<<" : ";
        cin>>s[i].idNum;
        cout<<"Enter the gpa of student "<<i+1<<" : ";
        cin>>s[i].gpa;
      }
       for(int i=0 ; i<3  ;  i++) 
      {
        cout<<s[i].name<<"\t"<<s[i].idNum<<"\t"<<s[i].gpa<<endl;
      }


}