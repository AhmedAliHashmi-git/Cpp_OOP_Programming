// Create a class for a banking system that allows users to create accounts, deposit and withdraw money, and view their transaction history.
#include<iostream>
using namespace std;
class BankingSystem{
       private:
       int balance;
    
       public:
       BankingSystem()
       {
        balance = 0;
        balance+=balance;
        // cout<<"You balance is: "<<balance;
       }
       void setBalance(int balance){
        this->balance = balance;
       }
       int getBalance()
       {
           return balance;
       }

       BankingSystem CreateAccount()
       {
        char decision;
        while(true){
        cout<<"Want to continue Y/N: ";
        cin>>decision;
        if(decision == 'Y'  || decision == 'y')
        {
        string name;
        int age;
        long int cnic;
        cin.ignore();
        cout<<"Enter your name: ";
        getline(cin , name);
        cout<<"Enter your age: ";
        cin>>age;
        cout<<"Enter your CNIC: ";
        cin>>cnic;
        cout<<"***You Have succesfully created an account***"<<endl;
        cout<<"Want to create another account Y/N: ";
        cin>>decision;
        if(decision == 'Y'  || decision == 'y')
        {
            continue;
        }
        else 
        {
            break;
        }
        }
        else{
            break;
        }
       
        }
       
       }



       int DepositeMoney(int balance)
       {
         cout<<"Your balance is: "<<balance<<endl;
       }


       void Withdraw(int amount)
       {
        char history;
        int store[100];
        char decision;
        int i=1;
            cout<<"You want to continue: ";
            cin>>decision;
            if(decision == 'Y' || decision == 'y')
            {
            if(amount <= balance)
        { 
            balance=balance - amount;
            cout<<"Withdraw successfully.New balance: "<<balance<<endl;
            store=amount;
        }
        else{
            cout<<"Insufficent balance.amount cant be withdraw"<<endl;
        }    
            }
         
        
        while(true){
             cout<<"You want to see your transaction history or not Y/N: ";
            cin>>history;
            if(history == 'Y' || history=='y'){
            cout<<"Your "<<i<<" transaction is: "<<store<<endl;
            i++;
            }
            else{
                break;
            }
        
       }
        }
           
       
};

int main()
{
    BankingSystem bs , bs1;
    int choice;
    int amount;
    while(true){
        cout<<"1. create account"<<endl<<"2. deposite Money"<<endl<<"3.withdraw"<<endl<<"4.Exite"<<endl;
        cout<<"Please select one option: ";
        cin>>choice;
        switch(choice){
        case 1:
        bs1 = bs.CreateAccount();//Defined in 21st line.
        break;

        case 2:
        cout<<"Enter amount you want to deposite in Bank: ";
        cin>>amount;
        bs.setBalance(amount);
        bs.getBalance();
        break;

        case 3:
        cout<<"Enter the amount you want to withdraw: ";
        cin>>amount;
        bs.Withdraw(amount);
        break;
        

        case 4:
        return 0;
        }
    }

    

}
