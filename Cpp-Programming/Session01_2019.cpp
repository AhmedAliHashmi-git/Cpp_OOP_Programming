//..................Question 01.
// #include<iostream>
// using namespace std;
// void Sum(int num)
// {
//      int sum = 0;
//      for(int i=1  ;  i<=10  ;  i++){
//         if(i%2 == 1){
//         sum+=i;
//         }
//      }
//      cout<<sum;
// }
// int main()
// {
//     int num=10;
//     Sum(10);
//     return 0;
// }

// ...................Question 02.
#include<iostream>
using namespace std;

struct Student{
    string Name;
    int Roll_Number;
    double CGPA;
};

void input(Student arr[][1], int size1, int size2){
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            cout<<"Enter the Name of the Student: ";
            cin>>arr[i][j].Name;
            cout<<"Enter the Roll Number of the Student: ";
            cin>>arr[i][j].Roll_Number;
            cout<<"Enter the CGPA of the Student: ";
            cin>>arr[i][j].CGPA;
        }
    }
}

void Print(Student arr[][1], int size1, int size2){
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            cout<<"Name: "<<arr[i][j].Name<<endl;
            cout<<"Roll Number: "<<arr[i][j].Roll_Number<<endl;
            cout<<"CGPA: "<<arr[i][j].CGPA<<endl;
            cout<<endl;
        }
    }
}

int main(){
    Student arr[2][1];
    input(arr, 2, 1);
    Print(arr, 2, 1);
    return 0;
}



//...............Question 03
// #include<iostream>
// using namespace std;
// int Fact(int n){
//     if(n==1  ||  n==0){
//         return 1;
//     }
//     else {
//         return n*Fact(n-1);
//     }
// }
// int main(){
//     int n=2;
//     cout<<Fact(n);
// }


// #include<iostream>
// using namespace std;
// void SumAverage(int *arr , int size , int &sum , double &avg){  


//        sum = 0;
//     for(int i=0 ; i<size  ; i++)
//     {
//        sum+=arr[i];
       
//     }
//       avg = double(sum)/size;

// }
// int main(){
//     int arr[]={6,6,3,7,4,6,3,4,6,7};
//     int sum;
//     double avg;

// SumAverage(arr , 10 , sum , avg);
// cout<<sum<<" "<<avg;
// }