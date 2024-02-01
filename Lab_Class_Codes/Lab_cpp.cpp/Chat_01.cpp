// Create a class called Car with attributes make, model, and year, and a method start that prints out a message indicating that the car has started.
#include<iostream>
using namespace std;
class Car{
     private:
     int model;
     int year;
     public:
     car(){
        model = 0;
        year = 0;
     }
     
     void setMobel(int model){
        this->model = model;
        
     }
     int getModel()
     {
        return model;
        
     }

      void setYear(int year){
        this->year = year;
     }
     int getYear()
     {
        return year;
       
     }
    void start(){
    Car car;
   
    cout<<"Model- "<<model<<endl;
    cout<<"Year- "<<year<<endl;
    
      
}
};


int main()
{
    char indicator;
    Car car;
    car.setMobel(2001);
    car.setYear(2001);
    car.start();
    cout<<"Press an indicator to start the car: ";
    cin>>indicator;
    if(indicator == 'Y' || indicator == 'y')
    {
        cout<<"***Car is start***";
    }
    else 
    {
        cout<<endl<<"Errrorrr!!!";
    }

     }

