
#include<iostream>
using namespace std;
class A{
 
    public:
    void add(int x, int y , int z){   
        
        cout<<x+y+z<<endl;
    }
    void add(double x , double y   , double z)
    {
        cout<<x+y+z<<endl;
    }
};
int main()
{
     A b;
     b.add(3,4,5);
     b.add(3.0,3.9,3.4); 
     
}