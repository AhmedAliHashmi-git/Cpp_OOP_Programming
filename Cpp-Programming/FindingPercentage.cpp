#include<iostream>
using namespace std;
class student{
    private:
    float totalMarks;
    float obtainedMarks;
    float calculatedPercentage;
    public:
    void setTotalMarks(float totalMarks)
    {
        this->totalMarks=totalMarks;
        Percentage();
    }
    float getTotalMarks(){
        return totalMarks;
    }

     void setObtainedMarks(float obtainedMarks)
    {
        this->obtainedMarks=obtainedMarks;
        Percentage();
    }
    float getObtainedMarks(){
        return obtainedMarks;
    }

     void Percentage()
    {
           calculatedPercentage=(obtainedMarks/totalMarks)*100;
    }
    float getPercentage(){
        return calculatedPercentage;
    }
    
};
int main(){
   student std;
   std.setTotalMarks(100);
   std.setObtainedMarks(80);
   cout<<"Total Marks - "<<std.getTotalMarks()<<endl;
   cout<<"Obtained Marks - "<<std.getObtainedMarks()<<endl;
   cout<<"Percentage is - "<<std.getPercentage()<<endl;
}