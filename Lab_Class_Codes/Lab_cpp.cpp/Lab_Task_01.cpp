#include<iostream>
using namespace std;
// ..keyword  ,  structure name
struct MovieData{
       //..structure members
      string movieTitle;
      string director;
      int yearOfReleased;
  
}; 
MovieData CreateMovieData(MovieData ); //..Declaring function
void DisplayMovieData(MovieData ); //..Declaring function


    //..Definition of funtion 01
    MovieData CreateMovieData(MovieData md)
    {
        //..Taking information from user
        cout<<string(80 , '-')<<""<<endl;
        cout<<"please provide some information : "<<endl;
        cout<<string(80 , '-')<<""<<endl; //..This will create a line 
        cout<<"Enter the movie title : ";
        getline(cin , md.movieTitle);
        cout<<"Directed by : ";
        getline(cin , md.director);
        cout<<"Year when release : ";
        cin>>md.yearOfReleased;
        return md;   //..returning the information to main menu
       
    }



    //..Definition of function 02
    void DisplayMovieData(MovieData  md)
    {
    //..Displying the information
    cout<<string(80 , '*')<<""<<endl; //..This will create stars line
    cout<<"Movie Title - "<<md.movieTitle<<endl;
    cout<<"Director Name - "<<md.director<<endl;
    cout<<"Year of Release - "<<md.yearOfReleased<<endl;
    cout<<string(80 , '*')<<""<<endl;
    }




//..main funtion
int main()
{
    MovieData md,md1;//..declaring two vatiable
    md1 = CreateMovieData(md);  //..calling one function  and storing in one variable
    md = md1;   //..Now storing md1 to md
    DisplayMovieData(md);  //..Now calling the DisplayMovieData function
}