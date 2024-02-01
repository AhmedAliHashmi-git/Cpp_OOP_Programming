
#include<iostream>
using namespace std;
class Rectangle{
    float length;
     float width;
     public:
     void setLength(float length){
       this-> length = length;
     }
     float getLength(){
        return length;
     }

     void setWidth(float width){
        this->width = width;
     }
     float getWidth(){
        return width;
     }

      float Perimeter(){
        return 2*(length + width);
     }

      float Area(){
        return length * width;
     }
     void show()
     {
        cout<<"The Length of 1st Rectangle is: "<<length<<endl;
        cout<<"The Width of 2nd Rectangle is: "<<width<<endl;
     }
     int sameArea(Rectangle r[]){
          for(int i=0  ;  i<2 ; i++)
          {
            int a = r[0].Area();
            int b = r[1].Area();
            if(a == b)
            {
                return 1;
            }
            else 
            {
                return 0;
            }
          }
     }
    
};
int main()
{
    Rectangle r[2];
    float len,wid;

    for(int i=0 ; i<2 ; i++){
    cout<<"Enter the Length of "<<i+1<<" Rectangle: ";
    cin>>len;
    cout<<"Enter the Width of "<<i+1<<" Rectangle: ";
    cin>>wid;
     r[i].setLength(len);
     r[i].setWidth(wid);
    }
    for(int i = 0 ; i<2 ; i++)
    {
        r[i].show();
    }
    for(int i = 0 ; i<2 ; i++)
    {
        cout<<"The Perimeter of "<<i+1<<" Rectangle is: "<<r[i].Perimeter()<<endl;
    }
    for(int i = 0 ; i<2 ; i++)
    {
         
        cout<<"The Area of "<<i+1<<" Rectangle is: "<<r[i].Area()<<endl; 
    }
    
    for(int i = 0 ; i<1 ; i++)
    {
        int r1 = r[i].sameArea(r);
        if(r1 == 1)
        {
            cout<<"They are same"<<endl;
        }
        else 
        {
            cout<<"They are not same"<<endl;
        }
        
    }
   
}
