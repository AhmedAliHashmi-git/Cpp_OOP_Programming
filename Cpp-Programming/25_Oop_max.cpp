#include<iostream>
using namespace std;
class Math
{
   private:
   int a[5];
   public:
   void fill();
   void Display();
   int max();
   int min();
};
void Math::fill(){
    for(int i=0  ;  i<5  ;  i++)
    {
    cout<<"Enter the value of index ["<<i<<"] ";
    cin>>a[i];
    }
    
}
void Math::Display(){
    for(int i = 0 ;i<5 ; i++)
    {
         cout<<a[i]<<endl;
    }
}
int Math::max(){
    int m=a[0];
    for(int i=0  ;  i<5 ; i++){
      if(m<a[i])
      m=a[i];
      return m;
    }
}
    int Math::min(){
    int m=a[0];
    for(int i=0  ;  i<5 ; i++){
      if(m>a[i])
      m=a[i];
      return m;
    } 
}



int main(){
     Math fun;
     fun.fill();
     cout<<"Entered numbers are : "<<endl;
     fun.Display();
     cout<<"Maximun number is : "<<fun.max()<<endl;
     cout<<"Minimun number is : "<<fun.min()<<endl;
}