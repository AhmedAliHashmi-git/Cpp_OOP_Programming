#include<iostream>
using namespace std;
class Rectangle{
    float length;
     float width;
     public:
     //Setters and Getters
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
      //Function to find the Perimeter
      float Perimeter(){
        return 2*(length + width);
     }
      //Function to find the Area
      float Area(){
        return length * width;
     }

     //Function to Display the length and width
     void show()
     {
        cout<<"The Length of  Rectangle is: "<<length<<endl;
        cout<<"The Width of  Rectangle is: "<<width<<endl;
     }

     //Function to Compare the two  Areas of rectangle
     int sameArea(Rectangle r){
        int a = Area();
        int b = r.Area();
          if(a== b)
          {
            return 1;
          }
          else 
          {
            return 0;
          }
     }
    
};
int main(){
    Rectangle r1,r2; //two objects of class
    r1.setLength(15);
    r1.setWidth(6.3);
    r1.show();
    cout<<"The Area of 1st Rectangle is: "<<r1.Area()<<endl;
    cout<<"The Perimeter of 1st Rectangle is: "<<r1.Perimeter()<<endl;
    
    
    r2.setLength(5);
    r2.setWidth(18.9);
    r2.show();
    cout<<"The Area of 2nd Rectangle is: "<<r2.Area()<<endl;
    cout<<"The Perimeter of 2nd Rectangle is: "<<r2.Perimeter()<<endl;
    int a = r1.sameArea(r2); //Calling the function defined in 139th line
    if(a == 1)
    {
        cout<<"They are same "<<endl;
    }
    else 
    {
        cout<<"They are not same "<<endl;
    }
    cout<<endl<<endl;





    r1.setLength(5);
    r1.setWidth(2.5);
    r1.show();
    cout<<"The Area of 1st Rectangle is: "<<r1.Area()<<endl;
    cout<<"The Perimeter of 1st Rectangle is: "<<r1.Perimeter()<<endl;
    r2.setLength(5);
    r2.setWidth(18.9);
    r2.show();
    cout<<"The Area of 2nd Rectangle is: "<<r2.Area()<<endl;
    cout<<"The Perimeter of 2nd Rectangle is: "<<r2.Perimeter()<<endl;
     a = r2.sameArea(r1);
    if(a == 1)
    {
        cout<<"They are same "<<endl;
    }
    else 
    {
        cout<<"They are not same "<<endl;
    }
   
}