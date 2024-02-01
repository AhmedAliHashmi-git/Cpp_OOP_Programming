#include<iostream>
using namespace std;
int main(){
    int arr[10][5];
    int brr[5][10];
    int i,j;
    for(i=0    ;    i<10    ;    i++)
    
        for(j=0    ;   j<5   ;   j++)
        {
            cout<<"Enter the value of index["<<i<<"]"<<"["<<j<<"]";
            cin>>arr[i][j];
        }
        cout<<endl;
    cout<<"First 2D array"<<endl;
    for(i=0   ;     i<10   ;    i++)
    {
        for(j=0   ;    j<5   ;   j++)
        {
            cout<<"\t"<<arr[i][j];
        }cout<<endl;
    }
    cout<<"---------------------------------------------------------------------------------------------";
   

     for(i=0   ;     i<5  ;    i++)
    {
        for(j=0   ;    j<10   ;   j++)
        {
            brr[i][j]=arr[j][i];
        }
    }
    cout<<endl<<endl;
    cout<<"Task 01."<<endl;
    cout<<"Copy array:"<<endl;
    for(i=0   ;     i<5   ;    i++)
    {
        for(j=0   ;    j<10   ;   j++)
        {
           cout<<"\t"<<brr[i][j];
        }cout<<endl;
    }
    cout<<"--------------------------------------------------------------------------------------------";
    cout<<endl<<endl;
	cout<<"Task 02."<<endl;
    int sum;
    int Sum_of_rows=0;
    for(i=0   ;     i<10   ;    i++)
    {
    	sum=0;
        for(j=0   ;    j<5   ;   j++)
        {
           sum+=arr[i][j];
           
        }cout<<"The sum of row Number "<<i+1<<" is : "<<sum<<endl;
        Sum_of_rows+=sum;
    }
    cout<<"Sum of all rows is "<<Sum_of_rows<<endl;
    cout<<endl<<endl;
    int Sum_of_columns=0;
    for(i=0   ;     i<5   ;    i++)
    {
    	sum=0;
        for(j=0   ;    j<10   ;   j++)
        {
           sum+=arr[j][i];
           
        }cout<<"The sum of column Number "<<i+1<<" is : "<<sum<<endl;
        Sum_of_columns+=sum;
    }
    cout<<"Sum of all columns is "<<Sum_of_columns<<endl;
    
    
    
    
    return 0;
}