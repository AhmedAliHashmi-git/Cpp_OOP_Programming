#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int Game(char you , char comp){
    if(comp == you){
        return 0;
    }
    // rp
    // sr
    // sp
    if(comp == 'r'  &&  you == 'p'){
        return 1;
    }
    else if(comp == 'p'  &&  you == 'r'){
        return -1;
    }

     if(comp == 'r'  &&  you == 's'){
        return -1;
    }
    else if(comp == 's'  &&  you == 'r'){
        return 1;
    }

      if(comp == 's'  &&  you == 'p'){
        return 1;
    }
    else if(comp == 'p'  &&  you == 's'){
        return -1;
    }
    else if(comp != 'p' || comp != 'r'|| comp != 's'  ||   you != 'r' ||   you != 's' ||   you != 'p'){
        return 2;
    }

}

int main(){
    char you , comp;
    int sum = 0;
    for(int i=0 ; i<3; i++)
    {
        srand(time(0));
    int val  =  rand()%1000 + 1;
    if(val>0  && val <=323)
    {
        comp = 'p';
    }
    else if(val>33  && val <=646)
    {
        comp = 'r';

    }

      else if(val>646  && val <=1000)
    {
        comp = 's';

    }
    cout<<"Enter 'r' for rock 'p' for paper 's' sessor: ";
    cin>>you;
    int number = Game(you , comp);
    if(number  == 1){
        cout<<"You write "<<you<<" Computer write "<<comp<<" You win!"<<endl;
         sum++;

    }
    else if(number  == -1){
        cout<<"You write "<<you<<" Computer write "<<comp<<" You lose!"<<endl;

    }
    else if(number  == 0){
        cout<<"You write "<<you<<" Computer write "<<comp<<" Draw!"<<endl;
        // sum--;
    }
    else if(number == 2){
        cout<<"Invalid \nGame Terminated!!!!"<<endl;
        sum = sum-10;
        break;
    }
    }
    if(sum >= 2 ){
        cout<<"********************************************You Win***************************************";
    }
     
    else {
        cout<<"*******************************************You loss*************************************";
    }
    
}