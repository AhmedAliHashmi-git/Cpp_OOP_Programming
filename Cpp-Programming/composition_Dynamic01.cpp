// #include <iostream>
// #include <string>

// using namespace std;

// class Actor {
// public:
//     string name;
//     string role;

//     // Constructor for Actor class
//     Actor(string name, string role) {
//         this->name = name;
//         this->role = role;
//     }
// };

// class Movie {
// public:
//     // Constructor for Movie class
//     Movie() {
//         // Initialize the dynamic array with a size of 10
//         size = 10;
//         actors = new Actor[size];
//         count = 0;
//     }

//     // Destructor for Movie class
//     ~Movie() {
//         // Free the memory allocated for the dynamic array
//         delete[] actors;
//     }

//     // Function to add an actor to the movie
//     void addActor(string name, string role) {
//         // If the array is full, double its size
//         if (count == size) {
//             size *= 2;
//             Actor* temp = new Actor[size];
//             for (int i = 0; i < count; i++) {
//                 temp[i] = actors[i];
//             }
//             delete[] actors;
//             actors = temp;
//         }

//         // Add the new actor to the array
//         actors[count++] = Actor(name, role);
//     }

//     // Function to remove an actor from the movie
//     void removeActor(int index) {
//         if (index < 0 || index >= count) {
//             cout << "Invalid index." << endl;
//             return;
//         }

//         // Shift the remaining actors in the array to fill the gap
//         for (int i = index; i < count - 1; i++) {
//             actors[i] = actors[i + 1];
//         }

//         count--;
//     }

//     // Function to display a list of all the actors and their roles in the movie
//     void displayActors() {
//         cout << "Actors in the movie:" << endl;
//         for (int i = 0; i < count; i++) {
//             cout << actors[i].name << " - " << actors[i].role << endl;
//         }
//     }

// private:
//     Actor* actors;
//     int size;
//     int count;
// };

// int main() {
//     // Create a movie object and add some actors
//     Movie movie;
//     movie.addActor("Tom Hanks", "Forrest Gump");
//     movie.addActor("Robin Wright", "Jenny Curran");
//     movie.addActor("Gary Sinise", "Lieutenant Dan Taylor");

//     // Display the list of actors in the movie
//     movie.displayActors();

//     // Remove an actor from the movie and display the updated list of actors
//     movie.removeActor(1);
//     movie.displayActors();

//     return 0;
// }



// Create a class called "Book" that has data members for the book's title, author, and publication year. Then, create a class called "Library" that is composed of a dynamic array of Book objects and has functions to add a book to the library, remove a book from the library, and display a list of all the books in the library.
#include<iostream>
#include<string>
using namespace std;
class Book{
     string title;
     string author;
     int year;

     public:

     Book(){
        title = "";
        author = "";
        year = 0;
     }

     void setTitle(string title){
        this->title = title;
     }

     string getTitle(){
        return title;
     }
     
     void setAuthor(string author){
        this->author = author;
     }

     string getAuthor(){
        return author;
     }

       void setYear(int year){
        this->year = year;
     }

     int getYear(){
        return year;
     }

       void Print(){
        
        cout<<"Title- "<<title<<endl;
        cout<<"Authore- "<<author<<endl;
        cout<<"Year- "<<year<<endl<<endl;
        
        
    }



};

class Library{
    Book *book;
    int size;
    public:
    
    Library(){
        size = 0;
        book = new Book[size];
    }   
    ~Library(){
        delete[]book;
    }

    void AddBook(string title , string author , int year){
        Book *newbook = new Book[size+1];
        for(int i=0  ;  i<size  ; i++){
            newbook[i] = book[i];
        }
        
            newbook[size].setTitle(title);
            newbook[size].setAuthor(author);
            newbook[size].setYear(year);
            size++;
        delete[]book;
        
        book = newbook;
    }


     void DeleteBook(int index){
     	index = index-1;
        if(index<0 || index >= size){
           cout<<"Invalid index: "<<endl;
        }
         Book *deleteBook = new Book[size-1];
         for(int i = 0 ,n=0; i<size ; i++){
            if(i!= index){
                 deleteBook[n] = book[i];
                 n++;
            }
            
        }
         size--;
         delete[]book;
         book = deleteBook;
     }
 

   


    void CallPrint(){
        for(int i=0 ; i<size  ;  i++)
        {
            book[i].Print();
        } 
        
    }

};

int  main(){
     Library Lib;
     Lib.AddBook("war" , "ali" , 201);
     Lib.AddBook("love", "hassan" , 202);
     Lib.AddBook("some", "ahmed" , 203);
     Lib.CallPrint();
     Lib.DeleteBook(2);
     Lib.CallPrint();
     return 0;
     

}
