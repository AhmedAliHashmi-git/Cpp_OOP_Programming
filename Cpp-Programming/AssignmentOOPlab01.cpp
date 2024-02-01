#include<iostream>
using namespace std;
class Rectangle2;
class Rectangle3;
class Rectangle4;
class Rectangle1{
   private:
   int length , breadth;

   public:
   Rectangle1(int l , int b):length(l) , breadth(b){}
    friend void Sum(Rectangle1 r1 , Rectangle2 r2 , Rectangle3 r3 , Rectangle4 r4);
};

class Rectangle2{
   private:
   int length , breadth;

   public:
   Rectangle2(int l , int b):length(l) , breadth(b){}
   friend void Sum(Rectangle1 r1 , Rectangle2 r2 , Rectangle3 r3 , Rectangle4 r4);
};

class Rectangle3{
   private:
   int length , breadth;

   public:
   Rectangle3(int l , int b):length(l) , breadth(b){}
    friend void Sum(Rectangle1 r1 , Rectangle2 r2 , Rectangle3 r3 , Rectangle4 r4);

};

class Rectangle4{
   private:
   int length , breadth;

   public:
   Rectangle4(int l , int b):length(l) , breadth(b){}
   friend void Sum(Rectangle1 r1 , Rectangle2 r2 , Rectangle3 r3 , Rectangle4 r4);

};

void Sum(Rectangle1 r1 , Rectangle2 r2 , Rectangle3 r3 , Rectangle4 r4){
   cout<<"                   Length       Breadth"<<endl; 
   cout<<"Rectangle 1   :    "<<r1.length<<"                "<<r1.breadth<<endl;
   cout<<"Rectangle 2   :    "<<r2.length<<"                "<<r2.breadth<<endl;
   cout<<"Rectangle 3   :    "<<r3.length<<"                "<<r3.breadth<<endl;
   cout<<"Rectangle 4   :    "<<r4.length<<"                "<<r4.breadth<<endl;
   int sum1 = r1.length + r2.length + r3.length + r4.length;
   int sum2 = r1.breadth + r2.breadth + r3.breadth + r4.breadth;
   cout<<"---------------------------------------------------------"<<endl;
   cout<<"Sum           :    "<<sum1<<"              "<<sum2<<endl;
   cout<<"---------------------------------------------------------"<<endl;
   }


int main(){
   Rectangle1 r1(5 , 3);
   Rectangle2 r2(2 , 6);
   Rectangle3 r3(4 , 6);
   Rectangle4 r4(2 , 5);
   Sum(r1 , r2 , r3 , r4);
   return 0;
}