#include<iostream>
using namespace std;
class rectangle{
      private:
      int Length;
      int Width;
      public:
      void setlen(int Length)
      {
        this-> Length=Length;
      }
      int getlen()
      {
        return Length;
      }
       void setWid(int Width)
      {
        this-> Width=Width;
      }
      int getWid()
      {
        return Width;
      }

     int area()
     {
        return Length*Width;
     }
};
int main()
{
     rectangle obj;
     obj.setlen(3);
     obj.setWid(3);

    cout<<"Length - "<<obj.getlen()<<endl;
    cout<<"Width - "<<obj.getWid()<<endl;
    cout<<"The area is - "<<obj.area();
}