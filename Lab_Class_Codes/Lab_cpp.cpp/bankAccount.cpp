#include<iostream>
using namespace std;
class BankAccount{
       private:

       int accountNumber;
       string accountHoldName;
       int balance;
       public:

       BankAccount(){
        accountNumber=0;
        accountHoldName="Not set";
        balance=0;
       }
        void setAccountNumber(  int accountNumber)
        {
            this->accountNumber = accountNumber;
        }
         int getAccountNumber(){
            return  accountNumber;
        }

         void setAccountHoldName(string accountHoldName)
        {
            this->accountHoldName = accountHoldName;
        }
         string getAccountHoldName(){
            return  accountHoldName;
        }


        void setBalance(int balance)
        {
            this->balance = balance;
        }
         int getBalance(){
            return  balance;
        }

       void DepositeMoney(int amount){
        balance+=amount;
        cout<<endl<<"Your Bank Balance is:"<<balance<<endl;
       }

       void Withdraw(int withdraw)
       {
        balance = balance - withdraw;
        if(withdraw <= balance){
        cout<<"You have succesfully withdraw the amount: "<<withdraw<<"Rs"<<endl;
        }
        else{
            cout<<"Unsufficent balance "<<endl;
        }
        cout<<"Your current Amount is- "<<balance<<endl;
       }
      
        

        void DisplayDetail(BankAccount BA)
        {
            cout<<"Account Holder Name- "<<BA.accountHoldName<<endl;
            cout<<"Account Number- "<<BA.accountNumber<<endl;
            cout<<"Total Balance- "<<balance<<endl;
            
           
        }

      BankAccount CreateAccountDetail()
{
    BankAccount BA;
    int A_N;
    string Name;
    cout<<"Enter the account Number: ";
    cin>>A_N;
    cout<<"Enter the Account Holder name: ";
    cin>>Name; 
    BA.setAccountNumber(A_N);
    BA.setAccountHoldName(Name);
    BA.getAccountNumber();
    BA.getAccountHoldName();
    return BA;
}
        
       
};



int main()
{
    
    int deposite;
    int choice;
    int withdraw;
    BankAccount B_A , B_A2;
     B_A2 = B_A.CreateAccountDetail();
     while(true){
    cout<<"1.Deposite Amount"<<endl<<"2.Withdraw Money"<<endl<<"3.Display detail"<<endl<<"4.Exite "<<endl;
    cin>>choice;
    if(choice == 1)
    {
        cout<<"Enter the amount of money you want to deposite: ";
        cin>>deposite;
        B_A.DepositeMoney(deposite );
    }   
    else if (choice == 2)
    {
        cout<<"How much you want to withdrw: ";
        cin>>withdraw;
        B_A.Withdraw(withdraw);
    }

    else if(choice == 3)
    {
        B_A.DisplayDetail(B_A2);
    }
    else if(choice == 4)
    {
        break;
    }
     
     }
   

}