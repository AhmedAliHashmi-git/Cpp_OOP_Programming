#include<iostream>
using namespace std;

class Driver{
   int mile;
   int gallons;
  static int trip;
   public:
  
   Driver(int m , int g): mile(m) , gallons(g){}
   void Display(){
    trip++;
    cout<<"Total Trips- "<<trip<<endl;
   cout<<"Miles Per Gallon- "<<(float)mile/gallons<<endl;
   cout<<"Total Gallons- "<<gallons;
   }

};
 int Driver :: trip = 0;
int main(){
    int m ;
    int g;
    cout<<"Enter the miles: ";
    cin>>m;
    cout<<"Enter the gallons: ";
    cin>>g;
    Driver dr(m , g);
    dr.Display();
}
