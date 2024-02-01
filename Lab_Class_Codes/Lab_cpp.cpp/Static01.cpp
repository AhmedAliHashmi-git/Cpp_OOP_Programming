// Static Local variable:
// 1:default value is 0.
// 2:Throught out program.
// 3.Without calling function memory reserved.
// 4.And after completion of work memory destroyed. 



/*#include<iostream>
using namespace std;
void fun(){
    int x;  //reserved when call the function.
    static int y;  //reserved memory without calling the function.Default value = 0.
}
int main(){
    fun();
}*/



//Static member variable
//1:We can change the value without an object 
#include<iostream>
using namespace std;
class Account{
    public:
    int balance; // instance variable
    static float remain;  // class variable
   
    void setBalance(int b){
        balance = b;
    }
     //static member function.Don't need object.
    static void setRemain(float r){
        remain = r;
        cout<<"The valuue of r is: "<<r;
    }

};
float Account::remain = 3.5; //with the help of scope resolution operator.

int main()
{
    Account ::setRemain(4.5);
}
