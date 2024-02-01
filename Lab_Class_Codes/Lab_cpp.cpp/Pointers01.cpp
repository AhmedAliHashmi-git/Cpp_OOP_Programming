#include<iostream>
using namespace std;
class Rectangle{
     private:
     int height;
     int width;
     public:
     Rectangle( int height  ,  int width)
     {
         this -> height = height;
         this ->width = width;
     }


     int Area()
     {
      return height*width;
     }
};
int main()
{
    Rectangle rect(3 , 4);
    Rectangle* rectptr = &rect;
    cout<< rect.Area()<<endl;
    cout<<rectptr->Area();
}
