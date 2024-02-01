#include<iostream>
using namespace std;
int main(){
	int a[5];
	int c;
	int b=sizeof(a)/sizeof(a[0]);
	for(int i=0  ; i<b   ;   i++)
	{
		cout<<"Enter the value of index "<<"["<<i<<"]"<<endl ;
		cin>>a[i];
	}
	
	for(int i=0  ;   i<b  ;  i++)
	{int count=0;
		for(int j=i+1   ;   j<b   ;    j++)
		{
					if(a[i]==a[j])
			{
				count++;
			}
			
		
		}
		if(count=0)
		{
			cout<<a[i];
		}
	
	}
		
}