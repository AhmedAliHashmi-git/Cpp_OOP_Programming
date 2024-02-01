#include<iostream>
#include<string>
using namespace std;
class FavoriteSong{
    //...member varibales
      private:
      int size;
      string *songs;    

      public:
      //...constructor
      FavoriteSong(int size){
        this->size = size;
        this->songs = new string[size];
      }

      //...copy constructor
      FavoriteSong( FavoriteSong &FavSon){
        size = FavSon.size;
        songs = new string[size];
        for(int i=1 ; i<size  ;  i++){
            songs[i] = FavSon.songs[i];
        }
      }

      //...Destructor
      ~FavoriteSong(){
        delete[]songs;
      }
 
        
      //...Song adding function
      void addSong(string song){
      string *newSongs = new string[size+1];
      for(int i=0 ; i<size ; i++){
        newSongs[i] = songs[i]; 
      }
      newSongs[size] = song;
      delete[] songs;
      size++;
      songs = newSongs;

      }


      //...Updating Song Function
      void UpdateSong(int num){
      songs[num];
      string song;
      cout<<"Updater the Song: ";
      cin.ignore();
      getline(cin , song);
      songs[num] = song;
      }


       //...Deleting Song function.
      void DeleteSong(int num){
        
      string *deleteSong = new string[size];
            for(int i = 0 , n = 0  ; i<size ; i++){
                
                if(i != num){
                deleteSong[n++] = songs[i];
            }
            
            
            }
            if(num > size ||  num<0){
                cout<<"Song not found"<<endl;
            }
            delete[] songs;
            size--;
            songs = deleteSong;
            
        }
        

        //...Printing Data function
      void PrintSongs(){
        for(int i=0  ;  i<size  ;  i++){
            cout<<songs[i]<<endl;
        }
      }


};


//....main funtion
int main(){
    int size = 1; 
    FavoriteSong FavSon(size); 
    string song;
    int num;
    int choice;
    while(true){
    cout<<"1- Add a song\n2- Delete a song\n3- Update a song\n4- Print all songs\n5- Create Backup of songs\n6- Exite\n";
    cin>>choice;



    if(choice == 1){
    cout<<"Enter the new song: ";
    cin.ignore();
    getline(cin , song);
    FavSon.addSong(song);//...Define in 32nd line
    }


    else if(choice == 2){
        cout<<"Enter the song number you want to delete: ";
        cin>>num;
        FavSon.DeleteSong(num);//...define in 57th line.
    }


    else if(choice == 3){
        cout<<"Enter the song number you want to update: ";
        cin>>num;
        FavSon.UpdateSong(num);//...Define in 46th line.
    }




    else if(choice == 4){
      FavSon.PrintSongs(); //...define in 79th line.
    }



    else if(choice == 5){
        FavoriteSong FavSon2(FavSon);
        cout<<"Backup Created: "<<endl;
        FavSon2.PrintSongs();  //...Calling through copy constructor 
    }
  
    
    
    else if(choice == 6)
    {
        break;
    }


    }

}