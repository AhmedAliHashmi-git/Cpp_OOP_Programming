#include <iostream>
#include <string>
using namespace std;
class Inventory {
    private:
        int id;
        string name;
        int price;
        int quantity;
    public:
        //..Default parameterize Constructor
        Inventory(int id, string name, int price, int quantity) {
            this->id = id;
            this->name = name;
            this->price = price;
            this->quantity = quantity;
        }
        //..Default Constructor
        Inventory() {
            id = 0;
            name = "Not set";
            price = 0;
            quantity = 0;
        }
        //...Setters and Getters
        void setID(int id) {
            this->id = id;
        }
        int getID() {
            return id;
        }
        void setName(string name) {
            this->name = name;
        }
        string getName() {
            return name;
        }
        void setPrice(int price) {
            this->price = price;
        }
        int getPrice() {
            return price;
        }
        void setQuantity(int quantity) {
            this->quantity = quantity;
        }
        int getQuantity() {
            return quantity;
        }
        
        //..Destructor
        ~Inventory() {
            cout << "Methode destroyed" << endl;
        }
};
//..function declaration
        void display(Inventory IN[] , int size) {
            for(int i=0 ; i<size ; i++)
            {
            cout<<"Name: " <<IN[i].getName() << endl;
            cout<<"ID: " <<IN[i].getID()<< endl;
            cout<<"Price: " << IN[i].getPrice()<< endl;
            cout<<"Quantity: " << IN[i].getQuantity() << endl;
            cout<<endl;
            }
            
        }
//..function declaration
int updateItem(Inventory IN[], int size) {
    int choice, newPrice, newQuantity,i;
    cout << "1.Update the price " << endl << "2.Update Quantity" << endl << "3.Exit" << endl;
    cin >> choice;

        if(choice == 1) {
            cout<<"Enter the index: ";
            cin>>i;
            cout << "Set new price ";
            cin >> newPrice;
            IN[i-1].setPrice(newPrice);
        } else if(choice == 2) {
            cout<<"Enter the index: ";
            cin>>i;
            cout << "Set new Quantity ";
            cin >> newQuantity;
            IN[i-1].setQuantity(newQuantity);
        } else if(choice == 3) {
           return 0;
        
    }
}
//..function declaration
void searchItem(Inventory IN[], int size) {
    int id;
    bool count = false;
    cout << "Enter id of the item: ";
    cin >> id;
    for(int i = 0; i < size; i++) {
        if(id == IN[i].getID()) {
           cout<<"Name - "<<IN[i].getName()<<endl;
           cout<<"ID - "<<IN[i].getID()<<endl;
           cout<<"Price - "<<IN[i].getPrice()<<endl;
           cout<<"Quantity - "<<IN[i].getQuantity()<<endl<<endl;
           count = true;
           break;
        }
    }
    if(count == false) {
        cout << "Item not found" << endl;
    }
}
//..function declare 
void Information(Inventory IN[], int size) {
    int choice;
    while(true) {
        cout << "1.Display items" << endl << "2.Update item detail" << endl << "3.Search for item by id" << endl << "4.Exit" << endl;
        cin >> choice;
        if(choice == 1) {
            
                display(IN , size);//..function call in 57th line
            
        }
         else if(choice == 2) {
            updateItem(IN, size); //..function call define in 60th line
        } 
        else if(choice == 3) {
            searchItem(IN, size);//..function call define in 79th line
        } 
        else if(choice == 4) {
            break;
        }
        else
        {
            cout<<"Invalid!!!\n";
        }
    }
}
//..main function
int main() {
    int size;
    cout << "Enter total number of items: ";
    cin >> size;//..size of an array
    Inventory IN[size];
      //..setting values
     for( int i = 0 ; i<size  ;  i++)
    {
        int id;
        string name;
        int price;
        int quantity;
         cout<<"Enter the id of item "<<i+1<<" : ";
         cin>>id;
         IN[i].setID(id);
         
         cin.ignore();
         cout<<"Enter the name of the item  "<<i+1<<" : ";
         getline(cin , name);
         IN[i].setName(name);
        
         cout<<"Set price "<<i+1<<" : ";
         cin>>price;
         IN[i].setPrice(price);
         
         cout<<"Quantity "<<i+1<<" : ";
         cin>>quantity;
         IN[i].setQuantity(quantity);
         
         
        
    }
 
        Information(IN , size);  //...function call which is define and declare in 96th  line
    
}