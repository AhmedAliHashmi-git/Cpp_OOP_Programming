#include<iostream>

using namespace std;

struct StudentData{ 
     string studentName;   //..structure member.
     int studentMarks[3];
};  




    void Display_data(StudentData student[]){  //..declaring and defining function by taking array as an argument
    
    for(int j=0  ;  j<2  ;  j++){
     cout<<endl<<"Student Name : "<<endl;
    cout<<student[j].studentName<<endl;
     
    for(int i=0 ;  i<3   ;  i++)
    {
       
        cout<<endl<<"Student marks for the course : "<<i<<endl;
        cout<<student[j].studentMarks[i]<<endl;
       
    } 
    }

    }
    

     //..Another function defining which find Average
     void Calc_Average_Marks(StudentData marks[])
     {
        
        int studentNo=0; 
        cout<<"Enter the Student Number: "<<endl;
        cin>>studentNo;
        if(studentNo == 1)
        {
         
            cout<<"Average marks: "<<(marks[0].studentMarks[0]+marks[0].studentMarks[1]+marks[0].studentMarks[2])/3<<endl;

        }
        else if(studentNo == 2)
        {
            cout<<"Average marks: "<<(marks[1].studentMarks[0]+marks[1].studentMarks[1]+marks[1].studentMarks[2])/3<<endl;
        }

     }






    
       //..3rd function which is use to change the marks
       void  Change_Marks(StudentData student[])
       {
        int courseNo;
        int studentNo; 
        int updatedMarks;
        cout<<"Enter the Student Number: "<<endl;
        cin>>studentNo;
        cout<<"Enter the course number to change marks: ";
        cin>>courseNo;
        if(studentNo==1)
        {
             if(courseNo ==  1)
        {
          student[0].studentMarks[0]=0;
          cout<<"Enter the updated marks: ";
          cin>>updatedMarks;
          student[0].studentMarks[0]=updatedMarks;
        }
        else if(courseNo == 2)
        {
            student[0].studentMarks[1]=0;
            cout<<"Enter the updated marks: ";
            cin>>updatedMarks;
            student[0].studentMarks[1]=updatedMarks;

        }
        else if(courseNo == 3)
        {
            student[0].studentMarks[2]=0;
            cout<<"Enter the updated marks: ";
            cin>>updatedMarks;
            student[0].studentMarks[2]=updatedMarks;

        }
        }


        else if(studentNo == 2)
        {
            if(courseNo ==  1)
        {
          student[1].studentMarks[0]=0;
          cout<<"Enter the updated marks: ";
          cin>>updatedMarks;
          student[1].studentMarks[0]=updatedMarks;
        }

        else if(courseNo == 2)
        {
            student[1].studentMarks[1]=0;
            cout<<"Enter the updated marks: ";
            cin>>updatedMarks;
            student[1].studentMarks[1]=updatedMarks;

        }
         else if(courseNo == 3)
        {
            student[1].studentMarks[2]=0;
            cout<<"Enter the updated marks: ";
            cin>>updatedMarks;
            student[1].studentMarks[2]=updatedMarks;

        }

        
        }
       
        
       }
   







int main()

{
    StudentData  marks[3];
    int decision;
    for(int j=0  ;  j<2  ;  j++){
     cout<<"Student Name : ";
    cin.ignore();
    getline(cin , marks[j].studentName);
     
    for(int i=0 ;  i<3   ;  i++)
    {
       
        cout<<"Student marks for the course : "<<i<<endl;
        cin>>marks[j].studentMarks[i];
       
    } 
    }

    while(true) 
    { 
        cout<<"Menu:"<<endl;
        cout<<"1. Display student Data"<<endl<<"2. Calculate Average Number"<<endl<<"3. Change Marks"<<endl<<"4. To Exite a program"<<endl;
        cout<<"Please Select your option: ";
        cin>>decision;
        if(decision == 1)
        {
            Display_data(marks); //..calling first function
        }

        else if(decision == 2)
        {
          
          Calc_Average_Marks(marks); //..calling second function

        }
        else if(decision == 3)
        {
          Change_Marks(marks);  //..calling 3rd function
        }
        else if(decision == 4)
        {
            break;
        }
        
    }
    
    
}