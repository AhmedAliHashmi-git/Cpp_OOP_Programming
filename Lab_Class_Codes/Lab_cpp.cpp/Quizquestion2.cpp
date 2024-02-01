// 1.Write a  traffic light whose constant red green yellow take one parameter the duration of the light write a program to test the traffic light    so that it display constant and its duration. 
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

class TrafficLight{
   int duration;
   const string red  = "red";
   const string yellow = "yellow" ;
   const string green = "green";
   public:
   void Display(int r){
    if(r>0 && r<=33){
        cout<<"Constant - "<<yellow<<endl<<"Duration - "<<" One minute"<<endl;
    }
   

    
   else  if(r>33 && r<=66){
        cout<<"Constant - "<<green<<endl<<"Duration - "<<"ten Second"<<endl;
    }
   
    else if(r>66 && r<=100){
        cout<<"Constant - "<<red<<endl<<"Duration - "<<" One minute"<<endl;
    }
   }

  
};

int main(){
    TrafficLight TA;
    srand(time(0));
    int r = rand()%100 + 1;
    TA.Display(r);
}

