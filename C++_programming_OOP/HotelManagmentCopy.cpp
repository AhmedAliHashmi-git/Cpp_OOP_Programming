#include <iostream>
#include <string>

using namespace std;
class Room {
private:
    int roomNumber;
    string roomType;
    string checkInTime;
    string checkOutTime;
    double rent;
    string status;

public:
    Room(int roomNumber = 0, string roomType = "", string checkInTime = "", string checkOutTime = "", double rent = 0.0, string status = "free") {
        this->roomNumber = roomNumber;
        this->roomType = roomType;
        this->checkInTime = checkInTime;
        this->checkOutTime = checkOutTime;
        this->rent = rent;
        this->status = status;
    }

    // Getter functions
    int getRoomNumber() {
        return roomNumber;
    }

    string getRoomType() {
        return roomType;
    }

    string getCheckInTime() {
        return checkInTime;
    }

    string getCheckOutTime() {
        return checkOutTime;
    }

    double getRent() {
        return rent;
    }

    string getStatus() {
        return status;
    }

    // Setter functions
    void setRoomNumber(int roomNumber) {
        this->roomNumber = roomNumber;
    }

    void setRoomType(string roomType) {
        this->roomType = roomType;
    }

    void setCheckInTime(string checkInTime) {
        this->checkInTime = checkInTime;
    }

    void setCheckOutTime(string checkOutTime) {
        this->checkOutTime = checkOutTime;
    }

    void setRent(double rent_amt) {
        rent = rent_amt;
    }

    void setStatus(string status) {
       this-> status = status;
    }
};

class Hotel {
private:
    string name;
    string location;
    string owner_name;
    int num_rooms;
    Room* rooms; // array of Room objects
public:
    
    Hotel(string name, string location, string owner_name, int num_rooms = 100) {
        this->name = name;
        this->location = location;
        this->owner_name = owner_name;
        this->num_rooms = num_rooms;

        // allocate memory for the array of Room objects
        rooms = new Room[num_rooms];
    }
    
    ~Hotel() {
        // deallocate memory for the array of Room objects
        delete[] rooms;
    }

    // Getter functions
    string get_name() const {
        return name;
    }

    string get_location() const {
        return location;
    }

    string get_owner_name() const {
        return owner_name;
    }

    int get_num_rooms() const {
        return num_rooms;
    }
    void HotelInfo(){
       cout<<endl<<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
        cout<<"Name of Hotel- "<<name<<endl;
        cout<<"Location - "<<location<<endl;
        cout<<"Owner of Hotel- "<<owner_name<<endl;
        cout<<"Total Numbers of Room- "<<num_rooms<<endl<<endl;
        cout<<"First 50 Rooms are Basic Type."<<endl<<"50 to 80 are Standard type."<<endl<<"80 to 100 are luxury type. "<<endl<<endl;

        cout<<endl<<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
    }
    int days;
    // Hotel functions
    int checkin(int roomNo) {
    
    string checkInTime;
    
   

    if (roomNo < 1 || roomNo > num_rooms) {
        cout << "Invalid room number." << endl;
        return -1;
    }

    if (rooms[roomNo-1].getStatus() == "Occupied") {
        cout << "Room " << roomNo << " is already occupied. Please select any other Room." << endl;
        return 0;
    }

    cout << "For how many days you want to occupy the room- ";
    cin >> days;
    cout << "Enter check In time- ";
    cin >> checkInTime;
    if(checkInTime.length() != 5 || checkInTime[2] != ':') {
            cout << "Invalid check time format. Please enter in hh:mm format." << endl;
            return 0;
        }

        // Check if the hours and minutes are within a valid range
        int hours = stoi(checkInTime.substr(0, 2));
        int minutes = stoi(checkInTime.substr(3));
        if(hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
            cout << "Invalid checkout time. Please enter a valid time in the range of 00:00 to 23:59." << endl;
            return 0;
        }
    

    // set room properties
    if (roomNo >= 1 && roomNo <= 50) {
        rooms[roomNo-1].setRoomType("basic");
        rooms[roomNo-1].setRent(2000.0);
    }
    else if (roomNo >= 51 && roomNo <= 80) {
        rooms[roomNo-1].setRoomType("standard");
        rooms[roomNo-1].setRent(5000.0);
    }
    else {
        rooms[roomNo-1].setRoomType("luxury");
        rooms[roomNo-1].setRent(7000.0);
    }
    rooms[roomNo-1].setRoomNumber(roomNo);
    rooms[roomNo-1].setStatus("Occupied");
    rooms[roomNo-1].setCheckInTime(checkInTime);
    rooms[roomNo-1].setRent(rooms[roomNo-1].getRent() * days);

    cout << "Room " << roomNo << " has been occupied." << endl;
    cout << "Room type - " << rooms[roomNo-1].getRoomType() << endl;
    cout << "Total Rent you want to pay- " << rooms[roomNo-1].getRent() << endl;
    cout<<"At time - "<<checkInTime<<endl;
    

    return 1;
}


  void checkout(int roomNo) {
    
    string checkOutTime;
    if(roomNo > 0 && roomNo <= num_rooms) {
        // Check if the room is occupied
        if (rooms[roomNo-1].getStatus() != "Occupied") {
            cout << "Room " << roomNo << " is not occupied." << endl;
            return;
        }

        // Get the check-in time
        string checkInTime = rooms[roomNo-1].getCheckInTime();
        double rent = rooms[roomNo-1].getRent();

        cout << "Enter Check out time (hh:mm): ";
        cin >> checkOutTime;

        // Check if the checkout time is in a valid format (hh:mm)
        if(checkOutTime.length() != 5 || checkOutTime[2] != ':') {
            cout << "Invalid checkout time format. Please enter in hh:mm format." << endl;
            return;
        }

        // Check if the hours and minutes are within a valid range
        int hours = stoi(checkOutTime.substr(0, 2));
        int minutes = stoi(checkOutTime.substr(3));
        if(hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
            cout << "Invalid checkout time. Please enter a valid time in the range of 00:00 to 23:59." << endl;
            return;
        }
        
        // Update the room status and print the details
        rooms[roomNo-1].setStatus("Free");
        rooms[roomNo-1].setCheckOutTime(checkOutTime);
        
        cout << "\n\n--------------------------------------------------------------------------\n\n";
        cout << "Room Number- " << roomNo << " is now free. You can Assing it to other  person." << endl;
        cout << "Room Type: " << rooms[roomNo-1].getRoomType() << endl;
        cout << "Total Rent: " << rooms[roomNo-1].getRent() << endl;
        cout << "Check-in time: " << checkInTime << endl; // print check-in time
        cout << "Check-out time: " << checkOutTime << endl;
        cout << "\n\n--------------------------------------------------------------------------\n\n";

    } else {
        cout << "Invalid room number" << endl;
    }
}



   void Print(){
    cout<<"\n\n--------------------------------------------------------------------------\n\n";
    for(int i = 0 ; i<num_rooms; i++){
        if(rooms[i].getStatus() == "Occupied"){
        cout<<"Room Number: "<<rooms[i].getRoomNumber()<<endl;
        cout<<"Room Type : "<<rooms[i].getRoomType()<<endl;
        cout<<"Check In Time of the Customer is : "<<rooms[i].getCheckInTime()<<endl<<endl;
        
        }
        
    }Decision();
     
        cout<<"All Rooms are Available. "<<endl;
    
   }
    void Decision(){
       for(int i = 0 ; i<num_rooms; i++){
        if(rooms[i].getStatus() == "Occupied"){
         cout<<" are "<<rooms[i].getStatus()<<endl;
         
        }
     
        
    }cout<<"\n\n--------------------------------------------------------------------------\n\n";
cout<<"Else ";
    

}
};




int main(){
    Hotel hotel("Sirina Hotel" , "Islamabad"  ,  "Hashmi");
    int decision;
    
    while(true){
    cout<<"\n\n\t\t1- Information of Hotel.\n\n\t\t2- Book a Room. \n\n\t\t3- Delete Room. \n\n\t\t4- Available Rooms.\n\n\t\t5- Exit\n\n\t\t "<<endl;
    cin>>decision;
    if(decision == 1){
        hotel.HotelInfo();
    }
    else if(decision == 2){
    int size;
    cout<<"How much rooms you want to Occupie : ";
    cin>>size;
    if(size > 0  && size <=100){
        for(int i = 0 ; i < size ; i++){
    cout<<"Enter Room Number: ";
    cin>>decision;
    int a = hotel.checkin(decision);
    if(a == 0){
        size++;
    }


    }
    
    }
    else{
        cout<<"Hotel have only 100 rooms. "<<endl;
    }

    }
    else if(decision == 3){
        cout<<"Enter the Room you want to delete :";
        cin>>decision;
        hotel.checkout(decision);
    }


    else if(decision == 4){
            hotel.Print();
    }

    else if(decision){
        break;
    }
    

    }
    
    
}

