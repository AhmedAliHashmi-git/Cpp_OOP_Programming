

// Lab Task # 01

// #include"iostream"
// using namespace std;
// int main(){
//     float sum=0;
//     float subject[6];
//     cout<<"Total Subjects : "<<endl;
//     cout<<"Math "<<"Physics "<<"chemistry "<<"PF "<<"Oop "<<"English "<<endl;
//     for(int i=0 ; i<6 ; i++){
//         cout<<"Enter the marks of the subject : "<<i+1<<" ";
//         cin>>subject[i];
//         sum+=subject[i];        
//     }
//     float percentage;
//     percentage=(sum/600)*100;
//     if(percentage>=90 && percentage<=100)
//     {
//         cout<<"A+";
//     }
//     else if (percentage>=80 && percentage<89)
//     {
//         cout<<"A";
//     }
//     else if (percentage>=70 && percentage<79)
//     {
//         cout<<"B+";
//     }
//     else if (percentage>=60 && percentage<69)
//     {
//         cout<<"C";
//     }
//     else if (percentage>=50 && percentage<59)
//     {
//         cout<<"D";
//     }
//     else
//     {
//         cout<<"F";
//     }    
// }


// Lab Task # 02


#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int age;
  char mertialStatus;
  bool empolyeed;
  cout<<"Enter your Age : ";
  cin>>age;
 
  
  if(age >= 25)
  { 
    cout<<"Are  you married  (Y/N) : ";
    cin>>mertialStatus;
    
    if(mertialStatus=='Y' || mertialStatus=='y')
    { 
      cout<<"Did you had a job before if 'YES' then write 1 if 'NO' then write 0 : ";
      cin>>empolyeed;
     
        if(empolyeed==1)
        {
          cout<<setw(20)<<setfill('*')<<"Congratulation"<<setw(20)<<setfill('*')<<endl<<setw(20)<<setfill('*')
          <<"You got a Job"<<setw(20)<<setfill('*');
        }
        else
        {
           cout<<"Sorry Rejected"<<endl<<"You should have work experiance";
        }

    }
    else
        {
           cout<<"Sorry Rejected"<<endl<<"You should married" ;
        }
    
  }
  else 
    {
     cout<<"Sorry Rejected"<<endl<<"Your age should be more then 25";
  }
}






// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//   int a=25;
//   cout<<"Square root of the number is "<<sqrt(a)<<endl;
//   cout<<"Log of the number is "<<log(a)<<endl;
//   cout<<"square of the function is "<<pow(a,2)<<endl;
//   cout<<"Cos value is  "<<cos(a)<<endl;
//   cout<<"Sin value is  "<<sin(a)<<endl;
//   cout<<"Tan value is  "<<tanh(a)<<endl;
// }
 


























//**************************************************ARRAY*******************************************************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1,2,3,4};
//     cout<<"The element are: ";
//     for(int i :arr)
//     {
//         cout<<i<<" ";
//     }
// }



//**********************************************Pattren*********************************************************


// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0  ;  i<5  ;  i++)
//     {
//         for(j=0  ;  j<=i  ;  j++)
//         {
//             cout<<"* ";
//         }cout<<endl;
//     }
// }




//**********************************************Function*********************************************************


// #include<iostream>
// using namespace std;
// void sum(int x){
//     int sum;
//     sum=x*5;
//     cout<<sum;
// }
// int main(){
//   sum(5); 
// }
