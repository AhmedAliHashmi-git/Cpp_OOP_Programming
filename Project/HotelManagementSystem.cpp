#include<iostream>
#include <string>
using namespace std;

class Room {
private:
    int room_number;
    string room_type;
    string check_in_time;
    string check_out_time;
    double rent;
    bool is_occupied;

public:
    Room(int number = 0, string type ="", string check_in="", string check_out="", double rent_amt=0.0, bool occupied = false) {
        room_number = number;
        room_type = type;
        check_in_time = check_in;
        check_out_time = check_out;
        rent = rent_amt;
        is_occupied = occupied;
    }

    // Getter functions
    int get_room_number() {
        return room_number;
    }

    string get_room_type() {
        return room_type;
    }

    string get_check_in_time() {
        return check_in_time;
    }

    string get_check_out_time() {
        return check_out_time;
    }

    double get_rent() {
        return rent;
    }

    bool is_room_occupied() {
        return is_occupied;
    }

    // Setter functions
    void set_room_number(int number) {
        room_number = number;
    }

    void set_room_type(string type) {
        room_type = type;
    }

    void set_check_in_time(string check_in) {
        check_in_time = check_in;
    }

    void set_check_out_time(string check_out) {
        check_out_time = check_out;
    }

    void set_rent(double rent_amt) {
        rent = rent_amt;
    }

    void set_room_status(bool occupied) {
        is_occupied = occupied;}
};
    


class Hotel {
private:
    string name;
    string location;
    string owner_name;
    Room* rooms;  // array of Room objects
    int num_rooms;

public:
    Hotel(string name, string location, string owner_name, int num_rooms) {
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
    string get_name() {
        return name;
    }

    string get_location() {
        return location;
    }

    string get_owner_name() {
        return owner_name;
    }

    Room* get_rooms() {
        return rooms;
    }

    int get_num_rooms() {
        return num_rooms;
    }

    // Setter functions
    void set_name(string name) {
        this->name = name;
    }

    void set_location(string location) {
        this->location = location;
    }

    void set_owner_name(string owner_name) {
        this->owner_name = owner_name;
    }

    // Hotel functions
    void checkin(int roomNo) {
        // find the room with the given room number
        for (int i = 0; i < num_rooms; i++) {
            if (rooms[i].get_room_number() == roomNo) {
                rooms[i].set_room_status(true);  // set the room to occupied
                return;
            }
        }
    }

    void checkout(int roomNo) {
        // find the room with the given room number
        for (int i = 0; i < num_rooms; i++) {
            if (rooms[i].get_room_number() == roomNo) {
                rooms[i].set_room_status(false);  // set the room to free
                rooms[i].set_check_in_time("");
                return;
            }
        }
    }

    void showRoomSummary(int roomNo) {
        // find the room with the given room number
        for (int i = 0; i < num_rooms; i++) {
            if (rooms[i].get_room_number() == roomNo) {
                if (rooms[i].is_room_occupied()) {
                    cout << "Room " << roomNo << " is occupied by customer X, checked in at " << rooms[i].get_check_in_time() <<endl;
                } else {
                    cout << "Room " << roomNo << " is available." << std::endl;
                }
                return;
            }
        }
        cout << "Room " << roomNo << " not found." << std::endl;
    }

    void getAvailRoom() {
        cout << "Available rooms:" << std::endl;
        for (int i = 0; i < num_rooms; i++) {
            if (!rooms[i].is_room_occupied()) {
                cout << "Room " << rooms[i].get_room_number() << ", type: " << rooms[i].get_room_type() << endl;
            }
        }
    }
};

void displayMenu() {
    cout << "========== MENU ==========" << endl;
    cout << "1. Check in" << endl;
    cout << "2. Check out" << endl;
    cout << "3. Show room summary" << endl;
    cout << "4. Show available rooms" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice (1-5): ";
}

int main() {
    // create a hotel object
    Hotel h("Hotel California", "Los Angeles", "The Eagles", 3);

    int choice, roomNo;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1: // Check in
                cout << "Enter room number: ";
                cin >> roomNo;
                h.checkin(roomNo);
                break;
            case 2: // Check out
                cout << "Enter room number: ";
                cin >> roomNo;
                h.checkout(roomNo);
                break;
            case 3: // Show room summary
                cout << "Enter room number: ";
                cin >> roomNo;
                h.showRoomSummary(roomNo);
                break;
            case 4: // Show available rooms
                h.getAvailRoom();
                break;
            case 5: // Exit
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
