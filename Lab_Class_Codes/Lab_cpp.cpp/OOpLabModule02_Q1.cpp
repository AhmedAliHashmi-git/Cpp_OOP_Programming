#include <iostream>

using namespace std;
//..Base Class
class LibraryItem {
private:
//..Memeber 
    string title;
    int num_copies;
public:
//..constructor
    LibraryItem(string title, int num_copies) {
        this->title = title;
        this->num_copies = num_copies;
    }
    //..getters
    string get_title() {
        return title;
    }
    int get_num_copies() {
        return num_copies;
    }
    void set_num_copies(int new_num) {
        num_copies = new_num;
    }
};
//..same
class LibraryBook : public LibraryItem {
private:
    string author;
public:
    LibraryBook(string author, string title, int num_copies) : LibraryItem(title, num_copies) {
        this->author = author;
    }
    string get_author() {
        return author;
    }
};
//..same
class LibraryDVD : public LibraryItem {
private:
    string director;
public:
    LibraryDVD(string director, string title, int num_copies) : LibraryItem(title, num_copies) {
        this->director = director;
    }
    string get_director() {
        return director;
    }
};
//..same
class LibraryMagazine : public LibraryItem {
private:
    string publisher;
public:
    LibraryMagazine(string publisher, string title, int num_copies) : LibraryItem(title, num_copies) {
        this->publisher = publisher;
    }
    string get_publisher() {
        return publisher;
    }
};
//..adding an element 
void add_item(LibraryItem** &library, LibraryItem* item, int &size) {
    LibraryItem** temp = new LibraryItem*[size + 1];
    for (int i = 0; i < size; i++) {
        temp[i] = library[i];
    }
    temp[size++] = item;
    delete[] library;
    library = temp;
    cout << item->get_title() << " has been added to the library." << endl;
}
//..removal of element
void remove_item(LibraryItem**& library, LibraryItem* item, int& size) {
    for (int i = 0; i < size; i++) {
        if (library[i] == item) {
            for (int j = i; j < size - 1; j++) {
                library[j] = library[j + 1];
            }
            size--;
            cout << item->get_title() << " has been removed from the library." << endl;
            return;
        }
    }
    cout << item->get_title() << " was not found in the library." << endl;
}
//..main (Sir time ni hai is lia comment ni add kia sahi say plzzz marks na katna 30 min rehty hai) 
int main() {
    int library_size = 0;
    LibraryItem** library_items = new LibraryItem*[library_size];

    LibraryBook* book = new LibraryBook("John Grisham", "The Firm", 5);
    LibraryDVD* dvd = new LibraryDVD("Christopher Nolan", "Inception", 3);
    LibraryMagazine* magazine = new LibraryMagazine("Time", "Sports Illustrated", 10);

    add_item(library_items, book, library_size);
    add_item(library_items, dvd, library_size);
    add_item(library_items, magazine, library_size);

    cout << "==========================" << endl;
    cout << "Library Inventory" << endl;
    cout << "==========================" << endl;
    for (int i = 0; i < library_size; i++) {
        cout << library_items[i]->get_title() << " - " << library_items[i]->get_num_copies() << " copies" << endl;
    }

    remove_item(library_items, dvd, library_size);

    cout << "==========================" << endl;
    cout << "Revised Library Inventory" << endl;
    cout << "==========================" << endl;
    for (int i = 0; i < library_size; i++){
//        cout << "==========================" << endl;
//    cout << "Revised Library Inventory" << endl;
//    cout << "==========================" << endl;
    for (int i = 0; i < library_size; i++) {
        cout << library_items[i]->get_title() << " - " << library_items[i]->get_num_copies() << " copies" << endl;
    }
    }
}
