#include<iostream>
#include<ctime>   
#include<cstdlib>

using namespace std;

class Dice{
    private:
    int value;
    public:
    Dice(){
        value = 0;
    }
    void Roll(){
        char roll;
        while(true)
        {
            cout<<"Do you want to roll the Dice Y/N: ";
            cin>>roll;
            if(roll == 'Y'   ||   roll == 'y')
            {
        value = rand()%6+1;
        cout<<value<<endl;
       if(value == 6)
       {
        cout<<"Chakkaaa"<<endl;
       }

       else{
        cout<<endl<<"Better luck next time"<<endl;
       }
            }

            else if(roll == 'N'   ||   roll == 'n')
            {
                cout<<"program exit"<<endl;
                break;
            }
      
    }
        }
     
};

int main()
{
    srand(time(nullptr));
    Dice dice;
    dice.Roll();
}