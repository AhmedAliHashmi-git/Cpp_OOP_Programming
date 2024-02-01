// #include<iostream>
// using namespace std;

// template<class T>
// T MaxNum(const T& a ,const T& b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

// int main(){
//     int a = MaxNum(5 , 4);
//     cout<<"The max number among them is : "<<a<<endl;

//     float b = MaxNum(5.5f , 7.5f);
//     cout<<"The max number among them is : "<<b<<endl;
// }



// #include<iostream>
// using namespace std;
// template<class T>
// T Swap( T& a ,  T& b){
//     T temp = 0;
//     temp = a;
//     a = b;
//     b = temp;

//     return (a,b);
// }
// int main(){
//     int a = 5 , b = 4;
//     cout<<"Before Swapping : "<<a<<" "<<b<<endl;
//     Swap(a , b);
//     cout<<"After Swapping : "<<a<<" "<<b<<endl;
// }

// #include <iostream>

// template<typename T, int size>
// class Array {
// public:
//     T& operator[](int index) {
//         if (index < 0 || index >= size) {
//             std::cerr << "Error: Index out of range." << std::endl;
//             exit(1);
//         }
//         return data[index];
//     }

//     const T& operator[](int index) const {
//         if (index < 0 || index >= size) {
//             std::cerr << "Error: Index out of range." << std::endl;
//             exit(1);
//         }
//         return data[index];
//     }

// private:
//     T data[size];
// };

// int main() {
//     Array<int, 5> intArray;

//     for (int i = 0; i < 5; i++) {
//         intArray[i] = i * i;
//     }
//     for (int i = 0; i < 5; i++) {
//         std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
//     }

//     Array<double, 3> doubleArray;

//     for (int i = 0; i < 3; i++) {
//         doubleArray[i] = i * 0.5;
//     }
//     for (int i = 0; i < 3; i++) {
//         std::cout << "doubleArray[" << i << "] = " << doubleArray[i] << std::endl;
//     }

//     return 0;
// }
