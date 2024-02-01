#include<iostream>
using namespace std;
class Simple{
     public:
      Simple(int x=5 , int y=10 , int z  =20)
     {
        cout<<x+y+z;
     } 
    
     
};
int main()
{
    Simple s(10,10,10);
}