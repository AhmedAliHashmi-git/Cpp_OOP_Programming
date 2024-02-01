#include<iostream>
#include<string.h>
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include<limits>
#include<fstream>
using namespace std;

//...base class
class DOB{
    int date;
    int month;
    int year;
    
    public:
        
        DOB(int d , int m , int y): date(d) , month(m) , year(y){}
        
        void setDate(int date){this->date = date;}
        void setMonth(int month){this->month = month;}
        void setYear(int year){this->year = year;}
        int getDate(){return date;}
        int getMonth(){return month;}
        int getYear(){return year;}
};
//..Derive from DOB class.
class NewAccount : public DOB{
    private:
    string name;
    string address;
    string CNIC;
    string password;
    long long int accountNumber;
    
    protected:
        float deposit;
        int date,month,year;
        
    public:
        //..Parameterized Constructor  having 8 argument.
        NewAccount(string n , string a , string c, string p , long long int r , int d , int m , int y) :date(d),month(m),year(y), DOB(d , m , y)
            ,name(n), address(a), CNIC(c), password(p), accountNumber(r) , deposit(0)  {
            system("cls");
            CreatedAccount();   
            // Write account data to file
            ofstream outFile("accounts.txt", ios::app);
            outFile << name << "," << address << "," << CNIC << "," << password << "," << accountNumber << "," << date << "," << month << "," << year << "," << deposit << endl;
            outFile.close();
        }
        
        
        //..Parameterized Constructor  having 2 argument.
        NewAccount(string n  , string p  ):  name(n) , password(p), date(0) , month(0) , year(0), DOB(date, month , year){}
        
        
        //..Default Constructor.
        NewAccount() :date(0) , month(0) , year(0), DOB(date, month , year) {}
        
        
        //..Definition of  CreatedAccount() function.
        
        
            void CreatedAccount(){
            cout << "******************************Account Created Successfully************************************" << endl;
            cout << left << setw(20) << "Name" << setw(20) << "Address" << setw(20) << "CNIC" << setw(20) << "Account Number"<<setw(20) << "Date of Birth" << endl;
            cout << left << setw(20) << name << setw(20) << address << setw(20) << CNIC << setw(20) << accountNumber <<date <<"/"<< month<<"/"<<year << endl;
        }
    
        //..Setters.
        void setName(string name){this->name = name;}
        void setAddress(string address){this->address = address;}
        void setCNIC(string CNIC){this->CNIC = CNIC;}
        void setPassword(string password){this->password= password;}
        void setAccountNumber(long long int accountNumber){this->accountNumber = accountNumber;}
        void setDeposit(float deposit){this->deposit = deposit;}
        
        //..Getters.
        string getName(){return name;}
        string getAddress(){return address;}
        string getCNIC(){return CNIC;}
        string getPassword(){return password;}
        long long int getAccountNumber(){return accountNumber;}
        float getDeposit() { return deposit;}



        //..function for deposit a money.
        void Deposite(float &amount){
            deposit += amount;
            if(amount <= deposit && amount > 0){
                cout << "Successfully Deposit amount: " << amount << endl;
                cout << "Total amount in your account is: " << deposit << endl;
            }
            else {
                cout << "Insufficient balance!!!" << endl;
            }
            // Update account data in file
            updateAccountData();
        }
        
        //..function for withdrawing the money.
        void WithDraw(float amount){
            
            if(amount <= deposit && amount > 0){
                deposit -= amount;
                cout << "Successfully WithDraw amount: " << amount << endl;
                cout << "Total amount in your account is: " << deposit << endl;
            }
            else {
                cout << "Insufficient balance!!!" << endl;
            }
            // Update account data in file
            updateAccountData();
        }
        
        // Update account data in file
        void updateAccountData() {
            ifstream inFile("accounts.txt");
            ofstream outFile("temp.txt");
            if (inFile.is_open() && outFile.is_open()) {
                string line;
                while (getline(inFile, line)) {
                    stringstream ss(line);
                    string currName, currAddress, currCNIC, currPassword, currDeposit;
                    long long int currAccountNumber;
                    int currDate, currMonth, currYear;
                    getline(ss, currName, ',');
                    getline(ss, currAddress, ',');
                    getline(ss, currCNIC, ',');
                    getline(ss, currPassword, ',');
                    ss >> currAccountNumber;
                    ss.ignore();
                    ss >> currDate;
                    ss.ignore();
                    ss >> currMonth;
                    ss.ignore();
                    ss >> currYear;
                    ss.ignore();
                    ss >> currDeposit;
                    if (currAccountNumber == accountNumber) {
                        outFile << name << "," << address << "," << CNIC << "," << password << "," << accountNumber << "," << date << "," << month << "," << year << "," << deposit << endl;
                    }
                    else {
                        outFile << line << endl;
                    }
                }
                inFile.close();
                outFile.close();
                remove("accounts.txt");
                rename("temp.txt", "accounts.txt");
            }
        }
};
void writeToFile(NewAccount* accounts, int size) {
    ofstream file("accounts.txt");
    if (file.is_open()) {
        for (int i = 0; i < size; i++) {
            file << accounts[i].getName() << " , " << accounts[i].getAddress() << " , " << accounts[i].getCNIC() << " , " << accounts[i].getPassword() << " , " << accounts[i].getAccountNumber() << " , ";
            // Add some space between account number and deposit
            file << accounts[i].getDeposit() << " , " << accounts[i].getDate() << " , " << accounts[i].getMonth() << " , " << accounts[i].getYear() << endl;
        }
        file.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }
}

void readFromFile(NewAccount* &accounts, int &size) {
    ifstream file("accounts.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            string name, address, cnic, password;
            long long int accountNumber;
            float deposit;
            int date, month, year;
            getline(ss, name, ',');
            getline(ss, address, ',');
            getline(ss, cnic, ',');
            getline(ss, password, ',');
            ss >> accountNumber;
            ss.ignore();
            ss >> deposit;
            ss.ignore();
            ss >> date;
            ss.ignore();
            ss >> month;
            ss.ignore();
            ss >> year;
            ss.ignore();
            NewAccount account(name, address, cnic, password, accountNumber, date, month, year);
            account.setDeposit(deposit);
            accounts[size++] = account;
        }
        file.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }
}



//..Derived class inherited from NewAccount class.
    
class LoanAccount : public NewAccount {
private:
    float loanAmount;
public:
    float totalAmount = 0;
    void getLoan() {
        bool loanGranted = false;
        cout << "How much you want to take loan: ";
        cin >> loanAmount;
        if (loanAmount > 0 && deposit >= 10000 && loanAmount <= 2000000) {
            setDeposit(getDeposit() + loanAmount);
            addInterest(loanAmount);
            cout << "Loan of " << loanAmount << " has been granted successfully." << endl;
            loanGranted = true;
        }
        if (!loanGranted) {
            cout << "You are not eligible for a loan!!!" << endl;
        }
        // Update account data in file
        updateAccountData();
    }
     
     
     //..funtion to add interest.
    void addInterest(float loanAmount) {
        this->loanAmount = loanAmount; 
        totalAmount = loanAmount * 1.05; // add 5% interest rate
        cout << "Total amount to be paid back including interest rate is: " << totalAmount << endl;
    }
    void Loan(){
        cout<<totalAmount;
    }
    
    // Update account data in file
    void updateAccountData() {
        ifstream inFile("accounts.txt");
        ofstream outFile("temp.txt");
        if (inFile.is_open() && outFile.is_open()) {
            string line;
            while (getline(inFile, line)) {
                stringstream ss(line);
                string currName, currAddress, currCNIC, currPassword, currDeposit;
                long long int currAccountNumber;
                int currDate, currMonth, currYear;
                getline(ss, currName, ',');
                getline(ss, currAddress, ',');
                getline(ss, currCNIC, ',');
                getline(ss, currPassword, ',');
                ss >> currAccountNumber;
                ss.ignore();
                ss >> currDate;
                ss.ignore();
                ss >> currMonth;
                ss.ignore();
                ss >> currYear;
                ss.ignore();
                ss >> currDeposit;
                if (currAccountNumber == getAccountNumber()) {
                    outFile << getName() << " , " << getAddress() << " , "<< getCNIC() << " , "  << " , " << getAccountNumber() << " , " << getDate() << " , " << getMonth() << " , " << getYear() << " , " << getDeposit() << endl;
                }
                else {
                    outFile << line << endl;
                }
            }
            inFile.close();
            outFile.close();
            remove("accounts.txt");
            rename("temp.txt", "accounts.txt");
        }
    }
};


	

//..CloseAccount class having Composition.	
class CloseAccount {
    long long int accountNumber;
public:
    bool found = false;
    void Close(NewAccount* &accounts, int &size) {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        for (int i = 0; i < size; ++i) {
            if (accountNumber == accounts[i].getAccountNumber()) {
                cout << "Account Successfully deleted!!!" << endl;
                for (int j = i; j < size - 1; j++) {
                    accounts[j] = accounts[j + 1];
                }
                size--;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Account Does not exist!!!" << endl;
        }
        else {
            writeToFile(accounts, size);
        }
    }

    void readAccountsFromFile(NewAccount* &accounts, int &size) {
        readFromFile(accounts, size);
    }

    void writeAccountsToFile(NewAccount* accounts, int size) {
        writeToFile(accounts, size);
    }
};





	
	
//..ModifyAccount class uses Composition.
class ModifyAccount {
public:
    void Update(NewAccount* AC, int size) {
        cout << "Enter account number you want to modify: ";
        int accountNum;
        cin >> accountNum;
        int i;
        bool found = false;
        for (i = 0; i < size; i++) {
            if (AC[i].getAccountNumber() == accountNum) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Invalid account number entered!" << endl;
            return;
        }
        cout << "Select the field you want to modify" << endl;
        cout << "1. Name" << endl;
        cout << "2. Address" << endl;
        cout << "3. CNIC" << endl;
        cout << "4. Password" << endl;
        int field;
        cin >> field;
        cout << "Enter new value: ";
        cin.ignore();
        string newValue;
        getline(cin, newValue);
        switch (field) {
            case 1:
                AC[i].setName(newValue);
                break;
            case 2:
                AC[i].setAddress(newValue);
                break;
            case 3:
                AC[i].setCNIC(newValue);
                break;
            case 4:
                AC[i].setPassword(newValue);
                break;
            default:
                cout << "Invalid field selected" << endl;
                return;
        }
        cout << "Account modified successfully!" << endl;
        writeToFile(AC, size);
    }
};


//..MoneyTransfer  uses Composition.
class MoneyTransfer {
private:
    long long int senderAccountNumber;
    long long int receiverAccountNumber;
    int amount;
    bool found = false;
public:
    MoneyTransfer(long long int s, long long int r, int a): senderAccountNumber(s), receiverAccountNumber(r), amount(a) {}
    void executeTransaction(NewAccount* account, int size)
    {
        found = false; // reset found to false
        for(int i = 0; i < size; i++) {
            if(senderAccountNumber == account[i].getAccountNumber()) {
                if(amount > account[i].getDeposit()) {
                    cout << "Insufficient Balance!!!" << endl;
                    return;
                }
                account[i].setDeposit(account[i].getDeposit() - amount);
                found = true;
            }
        }
        for(int i = 0; i < size; i++) {
            if(receiverAccountNumber == account[i].getAccountNumber()) {
                account[i].setDeposit(account[i].getDeposit() + amount);
                found = true;
            }
        }
        if(!found) {
            cout << "Incorrect Account Number!!!" << endl;
        } else {
            cout << "Amount Successfully transferred" << endl;
            writeToFile(account, size);
        }
    }
};

class AccountHolderList : public NewAccount {
public:
    void Display() {
        cout << left << setw(20) << getName() << setw(20) << getAddress() << setw(20) << getCNIC() << setw(20) << getDeposit() << setw(20) << getAccountNumber() << getDate() << "/" << getMonth() << "/" << getYear() << endl;
    }

    void readAccountsFromFile(NewAccount* &accounts, int &size) {
        readFromFile(accounts, size);
    }

    void writeAccountsToFile(NewAccount* accounts, int size) {
        writeToFile(accounts, size);
    }
};





int main() {
    int option;
    string name;
    string address;
    string CNIC;
    string password;
    float deposit;
    NewAccount* account = nullptr;
    MoneyTransfer* TM;
    long long int r;
    ModifyAccount md;
    bool term = false;
    srand(time(0));
    int size = 0;
    int date, month, year;

    while (!term) {
    string inpstr = "\nInvalid input! Please enter a number.\n";
    system("pause");
    system("cls");
    cout << "+-------------------------------------------------------------------------------------------------------------------+" << endl;
    cout << "                                    |           Welcome to the            |" << endl;
    cout << "                                    |             Bank System             |" << endl;
    cout << "+-------------------------------------------------------------------------------------------------------------------+" << endl;


    cout<< "                                     +------------------------------------+"<<endl;
    cout << "                                     |                                    |" << endl;
    cout << "                                     | 1. NEW ACCOUNT                     |" << endl;
    cout << "                                     |                                    |" << endl;
    cout << "                                     | 2. DEPOSIT AMOUNT                  |" << endl;
    cout << "                                     |                                    |" << endl;
    cout << "                                     | 3. WITHDRAW AMOUNT                 |" << endl;
    cout << "                                     |                                    |" << endl;
    cout << "                                     | 4. For Loan                        |" << endl;
    cout << "                                     |                                    |" << endl;
    cout << "                                     | 5. ALL ACCOUNT HOLDER LIST         |" << endl;
    cout << "                                     |                                    |" << endl;
    cout << "                                     | 6. CLOSE AN ACCOUNT                |" << endl;
    cout << "                                     |                                    |" << endl;
    cout << "                                     | 7. MODIFY AN ACCOUNT               |" << endl;
    cout << "                                     |                                    |" << endl;
    cout << "                                     | 8. Money Transfer                  |" << endl;
    cout << "                                     |                                    |" << endl;
    cout << "                                     | 9. EXIT                            |" << endl;
    cout << "                                     |                                    |" << endl;
    cout << "                                     +------------------------------------+" << endl;

    cout << "\n\n\tSelect an option: ";
    cin >> option;

    try {
        if (option < 1 || option > 9) {
            throw inpstr;
        }
    } catch (string& error) {
        cout << error;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
    }

    system("cls");



if (option == 1) {
    cin.ignore();
    cout << "Enter Your name: ";
    getline(cin, name);
    cout << "Enter Date of Birth: " << endl;
    cout << "Enter Date: ";
    cin >> date;
    if (date > 0 && date <= 31) {
        cout << "Enter Month: ";
        cin >> month;
        if (month > 0 && month <= 12) {
            cout << "Enter year: ";
            cin >> year;
            cin.ignore();
            cout << "Enter your Address: ";
            getline(cin, address);
            cout << "Enter CNIC number: ";
            cin >> CNIC;
            cout << "Enter your password: ";
            cin.ignore();
            getline(cin, password);
            r = rand() % 9999999999 + 1230000000;
            size++;
            NewAccount* temp = new NewAccount[size];
            for (int i = 0; i < size - 1; i++) {
                temp[i] = account[i];
            }
            temp[size - 1] = NewAccount(name, address, CNIC, password, r, date, month, year);
            delete[] account;
            account = temp;

            // Write the new account to the file
            ofstream outfile("account.txt", ios::app);
            outfile << name << "," << address << "," << CNIC << "," << password << "," << r << "," << date << "," << month << "," << year << endl;
            outfile.close();
        }
    }
    else {
        cout<<"invalid Date or Month."<<endl;
        continue;
        
    }
}


else if (option == 2) {
    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Password: ";
    getline(cin, password);
    bool accountFound = false;
    for (int i = 0; i < size; i++) {
        if (name == account[i].getName() && password == account[i].getPassword()) {
            float deposit;
            cout << "How much you want to deposit: ";
            cin >> deposit;
            account[i].Deposite(deposit);
            accountFound = true;
            break;
        }
    }
    if (!accountFound) {
        cout << "Account Not Found" << endl;
    }

    // Write the updated account list to the file
    ofstream outfile("account.txt");
    for (int i = 0; i < size; i++) {
        outfile << account[i].getName() << "," << account[i].getAddress() << "," << account[i].getCNIC() << "," << account[i].getPassword() << "," << account[i].getAccountNumber() << "," << account[i].getDate() << "," << account[i].getMonth() << "," << account[i].getYear() << endl;
    }
    outfile.close();
}

        else if(option ==3){
	     	cout<<"Enter Name of Account Holder: ";
			cin.ignore();
			getline(cin , name);
			cout<<"Enter Pasword: ";
			getline(cin , password);
			bool AccountFound = false;
			for(int i = 0 ; i<size ; i++){
			if(name == account[i].getName() && password == account[i].getPassword()){ 
		    	float withdraw;
				cout<<"How much you want to withdraw: ";
                cin>>withdraw;
                account[i].WithDraw(withdraw);
                AccountFound = true;
                break;
			}
		 }
	      
			if(!AccountFound) {
				cout<<"Account Not Found"<<endl;
			}
		}
        else if(option == 4){
        cout << "If your balance is more than 10000 " << endl << "You can get loan on interest rate of 5% " << endl;
        string name, password;
        cout << "Enter Name of Account Holder: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Password: ";
        getline(cin, password);
        bool accountFound = false;
        for (int i = 0; i < size; i++) {
            if (name == account[i].getName() && password == account[i].getPassword()) {
                LoanAccount la;
                la.setAccountNumber(account[i].getAccountNumber());
                la.setDeposit(account[i].getDeposit());
                la.getLoan();
                account[i].setDeposit(la.getDeposit());
                accountFound = true;
                break;
            }
        }
        if (!accountFound) {
            cout << "Account Not Found" << endl;
        }
    }

        
        else if (option == 5) {
            cout << "************************************Account Holder List************************************" << endl;

            cout << left << setw(20) << "Name" << setw(20) << "Address" << setw(20) << "CNIC" << setw(20) << "Account Balance" << setw(20) << "Account Number" << setw(20) << "Date Of Birth" << endl;
            AccountHolderList ac;
            for (int i = 0; i < size; i++) {
                ac.setName(account[i].getName());
                ac.setAddress(account[i].getAddress());
                ac.setCNIC(account[i].getCNIC());
                ac.setDeposit(account[i].getDeposit());
                ac.setAccountNumber(account[i].getAccountNumber());
                ac.setDate(account[i].getDate());
                ac.setMonth(account[i].getMonth());
                ac.setYear(account[i].getYear());
                ac.Display();
            }
        }


else if (option == 6) {
    CloseAccount ca;
    ca.Close(account, size);

    // Write the updated account list to the file
    ofstream outfile("account.txt");
    for (int i = 0; i < size; i++) {
        outfile << account[i].getName() << "," << account[i].getAddress() << "," << account[i].getCNIC() << "," << account[i].getPassword() << "," << account[i].getAccountNumber() << "," << account[i].getDate() << "," << account[i].getMonth() << "," << account[i].getYear() << endl;
    }
    outfile.close();
}


        else if (option == 7) {
    cout << "Enter Name of Account Holder: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Password: ";
    getline(cin, password);
    bool accountFound = false;
    ModifyAccount* MD = new ModifyAccount[size];
    for (int i = 0; i < size; i++) {
        if (name == account[i].getName() && password == account[i].getPassword()) {
            MD[i].Update(account, size);
            accountFound = true;
        }
    }

    if (!accountFound) {
        cout << "Account Not Found" << endl;
    }
    
    // Write the updated account list to the file
    ofstream outfile("account.txt");
    for (int i = 0; i < size; i++) {
        outfile << account[i].getName() << "," << account[i].getAddress() << "," << account[i].getCNIC() << "," << account[i].getPassword() << "," << account[i].getAccountNumber() << "," << account[i].getDate() << "," << account[i].getMonth() << "," << account[i].getYear() << endl;
    }
    outfile.close();
}
else if(option == 8){
    	
    	long long int sender;
    	long long int reciver;
    	int amount;
    	cout<<"Enter Sender Account Number: ";
    	cin>>sender;
    	cout<<"Enter Reciver Account Number: ";
    	cin>>reciver;
    	cout<<"Enter Amount: ";
    	cin>>amount;
    	MoneyTransfer TM(sender , reciver  ,  amount);
    	TM.executeTransaction(account , size);
	}
	
     
    

    
     else if(option == 9){
     	cout<<"Exiting..."<<endl;
     	system("pause");
     	term = true;
	 }
    }
    delete[] account;
    return 0;
}