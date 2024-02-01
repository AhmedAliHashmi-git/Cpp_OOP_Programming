#include<iostream>
using namespace std;
class Shape{
   private:
   int l;
   int w;

   public:
   void setA(int l , int w){
    this->l = l;
    this->w = w;
   }
   void getArea(){
    cout<<l*w;
   }


   void setB(int l , int w){
    this->l = l;
    this->w = w;
   }

   void getPer(){
    cout<<(l*w)*2;
   }
};

class Rectangle: public Shape{
  public:
  void print(){
    setA(2 , 3);
    getPer();
  }
};