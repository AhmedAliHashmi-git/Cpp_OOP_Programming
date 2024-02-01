#include<iostream>
using namespace std;
class FavoriteSong{
    private:
    int size;
    string *songs;

    public:
    int i;
    FavoriteSong(int size){
        this ->size = size;
        this->songs = new string[size];
    }

    ~FavoriteSong() {
            delete[] songs;
        }
       FavoriteSong(FavoriteSong &FavSon){
        size = FavSon.size;
       } 
        
    
   
        void addSong(string song) {
            string *newCollection = new string[size+1];
            for (int i = 0; i < size; i++) {
                newCollection[i] = songs[i];
            }
            newCollection[size] = song;
            delete songs;
            size++;
            songs = newCollection;
    }
    
    void DeleteSong(string song) {
            int index = -1;
            for (int i = 0; i < size; i++) {
                if (songs[i] == song) {
                    index = i;
                    break;
                }
            }
            if (index == -1) {
                cout << "Song not found." << endl;
                return;
            }
            string *newSong = new string[size-1];
            for (int i = 0, j = 0; i < size; i++) {
                if (i == index) {
                    continue;
                }
                newSong[j++] = songs[i];
            }
            delete[] songs;
            size--;
            songs = newSong;
        }

        void UpdateSong(string oldSong, string newSong) {
            int index = -1;
            for (int i = 0; i < size; i++) {
                if (songs[i] == oldSong) {
                    index = i;
                    break;
                }
            }
            if (index == -1) {
                cout << "Song not found." << endl;
                return;
            }
            songs[index] = newSong;
        }



void DisplaySong()
    {
        for( i=0  ;  i<size  ;  i++)
        {
            cout<<songs[i]<<endl;
        }
    }
     

       
};
int main()
{ 
    string song,song2;
    FavoriteSong FavSon(1);
    cout<<"Enter song name: ";
    cin.ignore();
    getline(cin , song);
    FavSon.addSong(song);
    int choice;
    while(true){
        cout<<"1- Add a song\n2- Delete a song\n3- Update a song\n4- Print all songs\n5- Create Backup of songs\n6- Exite\n";
        cin>>choice;
        if(choice == 1){
        cout<<"Enter new song: ";
        cin.ignore();
        getline(cin , song);
        cin.ignore();
        FavSon.addSong(song);
        }
        else if(choice == 2){
            cout<<"Which song you want to Delete: ";
            cin.ignore();
            getline(cin , song);
            FavSon.DeleteSong(song);
        }
        else if(choice == 3)
        {
            cout<<"Which song you want to update: ";
            cin.ignore();
            getline(cin , song);
            cout<<"Enter Update name: ";
            cin.ignore();
            getline(cin , song2);
            FavSon.UpdateSong(song , song2);
        }
        else if(choice == 4)
        {
            FavSon. DisplaySong();
        }
        else if(choice == 5){
            cout << "Backup Created:" << endl;
            FavSon.DisplaySong();
        }
        else if(choice == 6){
            break;
        }
        
    }
 







    // f.setSong();
    // f.DisplaySong();
    
    // f.DisplaySong();
}