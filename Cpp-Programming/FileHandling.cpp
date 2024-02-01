#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //ifstream:
    //for the input out out
    //ofstream ios:out
    //fstream ios:in  out

    //file handling

    //ofstream used output files stream(for writing data into the files)

    //ifstream handle input stream  (for reading data form the files)

    //f stream handle both input and output stream

    //(for reading from and writing to files)
    string line;
    ofstream fout;


    //create file
    fout.open("SectionC.txt");

    while(true){
        cout<<"Enter the data for the files: "<<endl;
//        cin.ignore();
        getline(cin , line);
        if(line != "-1"){
             fout<<line<<endl;
        }
        else{
            break;
        }
    }
    //close function with the help of the object 
    fout.close();
    ifstream ifin;
    ifin.open("SectionC.txt");
    while(getline(ifin , line)){
        cout<<line<<endl;
    }
    ifin.close();
}