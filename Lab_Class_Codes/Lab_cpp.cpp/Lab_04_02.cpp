#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Dice{
  private:

  int value;

  public:
  void setValue(int value)
  {
    this->value = value;
  }

  int getValue()
  {
    return value;
  }

  Dice()
  {
    value=0;
  }
 
  void roll(int a)
  {
  if(a==6)
   {
    cout<<"6 ";
    cout<<endl<<"Chakka"<<endl;
   }
   else
   {
    cout<<endl<<"Better luck next time"<<endl;
   }


  }
  

};

int main()
{
  int side;
  char roll;
  Dice D,D1;
  while(true)
  {
  cout<<"Do you want to roll the Dice: ";
  cin>>roll;
  if(roll == 'Y' || roll == 'y')
  {
    cout<<"Side: ";
    cin>>side;
    D.roll(side); 
  }
  else{
    break;
  }
  }
  
  
  
}