#include<iostream>
using namespace std;
class Book{//created a class
    private:
    string title;
    string auther;     //members of class
    string publisher;
    public:
    //These are getter and setter
    void setTitle(string title){
          this->title = title;
    }
    string getTitle()
    {
        return title;
    }

    void setAuther(string auther){
          this->auther = auther;
    }
    string getAuther()
    {
        return auther;
    }



     void setPublisher(string publisher){
          this->publisher = publisher;
    }
    string getPublisher()
    {
        return publisher;
    }

    void Read(); //this is the methode
    ~Book(){
        cout<<"Book is being read"<<endl;
    }
};
//definition of a funtion
void Book:: Read()
{
    cout<<"Title- "<<title<<endl;
    cout<<"Auther- "<<auther<<endl;
    cout<<"Publisher- "<<publisher<<endl;
}

//This is main function
int main()
{
   Book book;//object
   //setting values
   book.setTitle("War");
   book.setAuther("Hashmi");
   book.setPublisher("Hamza");
   book.Read();
}