#include<iostream>
#include<cmath>
using namespace std;
class Distance
{
    private:
    int x1,y1,x2,y2;
    public:
    int d;
    Distance()
    {
        // cout<<"Enter the value of 4 points : ";
        // cin>>x1>>x2>>y1>>y2;
        // x1=1;
        // y1=70;
        // x2=0;
        // y2=0;
    }
    void Calculation()
    {
        
        d=sqrt(pow((x2-x1) , 2)  +  pow((y2-y1) , 2 ));
        cout<<"The distance between these points is : "<<d;
    } 

};
int main()
{
    Distance dis;
    dis.Calculation();
}