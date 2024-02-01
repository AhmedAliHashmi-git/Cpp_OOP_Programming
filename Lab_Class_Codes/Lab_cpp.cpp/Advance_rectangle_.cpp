#include<iostream>

using namespace std;

class Rectangle {
    private:
    float length;
    float breath;
    public:
    Rectangle(){
        length = 0;
        breath = 0;
    }
    void setLength(float length){
        this->length = length;
    }
    float getLength(){
        return length;
    }


    
     void setBreath(float breath){
        this->breath = breath;
    }
    float getBreath(){
        return breath;
        
    }
    

    float Area(float length  , float breath){
        float calcuate;
        calcuate = length*breath;
        return  calcuate;
    } 


    float Perameter(float length  , float breath){
        float calcuate;
        calcuate = 2*(length+breath);
        return calcuate;
    } 

     

    float Compare(float A  ,  float B)
    {
         if(A>B){
            cout<<"Area 1 is greater"<<endl;
         }
         else
         {
            cout<<"Area 2 is greater"<<endl;
         }
    }

    
};


int main()
{
    Rectangle rectangle;
    rectangle.setLength(10);
    rectangle.setBreath(15);
    float a = rectangle.getLength();
    cout<<"The Area of rectangle is: "<<a<<endl;
    float b = rectangle.getBreath();
    cout<<"The perameter the rectangle is: "<<b<<endl;
    float c = rectangle.Area(a , b);
    float d = rectangle.Perameter(a , b);
   rectangle.Compare(c , d);
}