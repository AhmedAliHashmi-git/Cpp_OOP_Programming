//..................................................Factorial.............................................//

// #include<iostream>
// using namespace std;
// int Factorial(int n);
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<"The factotial of the number is: "<<Factorial(n);
// }
// int Factorial(int n){
//     if(n == 1 || n == 0)
//     {
//         return 1;
//     }

//     else {
//         return n*Factorial(n-1);
//     }
// }

//..............................................FactorialWithClass......................................................//
#include<iostream>
using namespace std;
int Fact(int n)
{
    if(n==1 || n==0){
        return 1;
    }

        else 
        {
            return n*Fact(n-1);
        }
    
}
class Class{
       int num;
       public:
       int setNum(int num){
        this-> num = num;
        int val = Fact (num);
        return val;
       }
       
};


int main(){
   
    int num;
    cout<<"Enter the number: ";
    cin>>num; 
    Class obj;
    int val = obj.setNum(num);
    cout<<val;
}