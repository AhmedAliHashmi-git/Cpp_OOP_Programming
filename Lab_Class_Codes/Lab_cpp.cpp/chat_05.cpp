// Create a class for a video game character that has attributes such as health, armor, and weapons, and methods such as attack and defend.
#include<iostream>
using namespace std;
class VideoGame{
    private:
    int health;
    int armor;
    public:
    VideoGame(){
       health=100;
       armor = 50;
    }

    void Attack(int attack)
    {
     if(attack>= 0 && attack <= 10)
     {

        if(armor>=0 && armor <=50)
        {
            armor = armor - 5;
            health = health - 10;
            cout<<"health- "<<health<<endl<<"armor power- "<<armor<<endl;
        }
        
     }
     else if(attack > 10 && attack <=20)
     {
        if(armor>=0 && armor <=50){
            armor = armor - 10;
             health = health - 20;
              cout<<"health- "<<health<<endl<<"armor power- "<<armor<<endl;
        }
       
     }
     else if(attack > 20 && attack <=30)
     {
        if(armor>=0 && armor <=50)
        {
            armor = armor -15;
            health = health - 30;
             cout<<"health- "<<health<<endl<<"armor power- "<<armor<<endl;
        }
        
     }
     else if(attack > 30 && attack <=40)
     {
        if(armor>=0 && armor <=50){
            armor = armor -20;
             health = health - 40;
              cout<<"health- "<<health<<endl<<"armor power- "<<armor<<endl;
        }
       
     }
     else if(attack > 40 && attack <=50)
     {
        if(armor>=0 && armor <=50){
            armor = armor -25;
         health = health - 50;
          cout<<"health- "<<health<<endl<<"armor power- "<<armor<<endl;
        }
        
     }
     else if(attack > 50 && attack <=60)
     {
        if(armor>=0 && armor <=50){
            armor = armor -30;
            health = health - 60;
            cout<<"health- "<<health<<endl<<"armor power- "<<armor<<endl;
        }
        
     }
     else if(attack > 60 && attack <=70)
     {
        if(armor>=0 && armor <=50){
            armor = armor -35;
            health = health - 70; 
            cout<<"health- "<<health<<endl<<"armor power- "<<armor<<endl;
        }
        
     }
     else if(attack > 70 && attack <=80)
     {
        if(armor>=0 && armor <=50){
            armor = armor -40;
             health = health - 80;
              cout<<"health- "<<health<<endl<<"armor power- "<<armor<<endl;
        }
       
     }
     else if(attack > 80 && attack <=90)
     {
        if(armor>=0 && armor <=50){
            armor = armor -45;
            health = health - 90;
             cout<<"health- "<<health<<endl<<"armor power- "<<armor<<endl;
        }
        
     }
     else if(attack > 90 && attack <=99)
     {
        if(armor>=0 && armor <=50){
            armor = armor -47;
            health = health - 95;
             cout<<"health- "<<health<<endl<<"armor power- "<<armor<<endl;
        }
        
     }
     else if(attack == 100)
     {
        if(armor>=0 && armor <=50){
            armor = armor - 50;
            health = health-100;
             cout<<"health- "<<health<<endl<<"armor power- "<<armor<<endl;
        }
        
     }
     if(health<= 0)
     {
        cout<<endl<<"Losseee"<<endl;
     }
    } 
};

int main()
{
    VideoGame V_G;
    int attack;
    while(true)
    {
    cout<<"attaccckkk- ";
    cin>>attack;
    V_G.Attack(attack);
   
    }
  
}

