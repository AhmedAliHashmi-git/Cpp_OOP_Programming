#include<iostream>
using namespace  std;

// class A{
//     private:
//     int n;
// public:
//   void in(){
//     cout<<"Enter the value: ";
//     cin>>n;
//   }
//   void out(){
//     cout<<"The value of n is : "<<n<<endl;
//   }


// };
// int main(){
//    A *ptr;
//    ptr = new A;
//    //creating object of and that ptr is refering the object of class A(NEW OBJECT).
//    ptr->in();  //"->" arrow operator /"->" member access operator in terms of polymorphism.
//    ptr->out();

   
   
//    }



// class Shape{
//    public:
//    void draw(){
//     cout<<"Drawing Shape"<<endl;
//    }
// };

// class Rectengle: public Shape{
//     int l , w;
//     public:
//     //we use virtual in order to do override.
//     void draw(){
//         cout<<"Drawing Rectangle: "<<endl;
//     }
// };

// class Circle: public Shape {
//     public:
//     void draw(){
//         cout<<"Drawing circle: "<<endl;
//     }

// };

// int main()
// {
//    Shape *ptr;
//    ptr = new Circle;
//    ptr->draw();

// }

// class A{
//   public:
//  virtual void show(){
//     cout<<"the parent class A"<<endl;
//   }
// };

// class B : public A{
//   public:

//   void show(){
//     cout<<"The child class B"<<endl;
//   }
// };

// class C : public A{
//  public:
//     void show(){
//         cout<<"the child class C"<<endl;
//     }   
// };

// int main(){
//     A obj1;
//     B obj2;
//     C obj3;

//     A *ptr;
//     ptr = new A;
//     ptr = &obj1;
//     ptr->show();
//     ptr = &obj2;
//     ptr->show();
//     ptr = &obj3;
//     ptr->show();
// }


class Shape{
   public:
   virtual void draw(){
    cout<<"Drawing Shape"<<endl;
   }
};

class Rectengle: public Shape{
    int l , w;
    public:
    //we use virtual in order to do override.
    void draw(){
        cout<<"Drawing Rectangle: "<<endl;
    }
};

class Circle: public Shape {
    public:
    void draw(){
        cout<<"Drawing circle: "<<endl;
    }

};

int main()
{  
   Shape obj1;
   Rectengle obj2;
   Circle obj3;
   Shape *ptr;
   ptr = new Shape;
   ptr = &obj1;
   ptr->draw();
   ptr = &obj2;
   ptr->draw();
   ptr = &obj3;
   ptr->draw();
}