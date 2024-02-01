// #include<iostream>
// using namespace std;
// int main(){
    

    



//     float *arr;
//     arr = new float[5];
//     for(int i = 0  ; i<5  ; i++){
//         arr[i] = i*i;
//     }


//     for(int i=0  ;   i<5   ;  i++)
//     {
//         cout<<arr[i]<<endl;
//     }   
//     delete[]arr;
//     return 0;



     

//     int *ptr1 , *ptr2 ,arr[3] , i;
//     ptr1 = &arr[2];
//     ptr2 = &arr[0];
//     ptr2 = ptr2 + 2;
//     // ptr2++;
//     cout<<ptr1<<endl;
//     cout<<ptr2<<endl;
// }



//................Pointers 

// #include<iostream>
// using namespace std;
// class Class{
//      public:
//      Class(){
//         cout<<"1st Constructor"<<endl;
//         cout<<"Object Constructed"<<endl;
//      }
    
//       Class(int value){
//         this-> value = value;
//         cout<<"2nd Constructor"<<endl;
//       }
//      ~Class(){
//         cout<<"Object Destroyed  "<<value<<endl;
//      }
//      void print()
//      {
//         cout<<value<<endl;
//      }
//      int value;
// };


// int main()
// {
//     Class *ptr , *ptr2 , *ptr3;
//     ptr = new Class();
//     ptr2 = new Class(2); 
//     ptr-> value = 1;
//     ptr2-> print();
//     ptr->print();
//     delete ptr;
//     delete ptr2;
//     return 0;
// }



//...................Memory Leak
// #include<iostream>
// using namespace std;
// class Class{
//     public:
//      Class(int val){
//         value  = new int[val];
        
//         cout<<"Allocated ("<<val<<")"<<endl;
//      }
//      ~Class()
//      {
//         delete [] value;
//         cout<<"Destroyed"<<endl;
//      }
//      int *value;
// };
// int Leak(){
//     Class obj(1000);
// }
// int main()
// {
//     Leak();
//     return 0;
// }








