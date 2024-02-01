#include<iostream>

using namespace std;

class  Account{
    private:
    string name;
    int balance;

    public:
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return name;
    }


    void setBalance(int balance){
        this->balance=balance;
    }
    int getBalance(){
        return balance;
    }

      int depositeAmount(int amount){
        int totalAmount;
        totalAmount = balance + deposite;
        cout<<"Your current balance is- "<< totalAmount << endl;
        

    }

    int withdrawAmount(int balance)
    {
        cout<<"You balance is- "<<balance<<endl;
        char decision;
        int withdraw=0;
        int total=0; 
        while(true){
            balance = balance - withdraw  ;
             cout<<"You want to continue (Y/N): ";
             cin>>decision;
             if(decision == 'Y'  ||  decision == 'y'){
             
             cout<<"Please Enter the amount: ";
             cin>>withdraw;
             total=balance;
             total = total - withdraw;
             cout<<"You have succesfully withdraw "<<withdraw<<endl;
             cout<<"Your current balance is:"<<total<<endl;
             if( total <= 0 )
             {
                cout<<"Your transaction cannot be proceed further "<<endl;
                cout<<endl<<endl;
                break;
             }
        
             
        }
        
         if(decision == 'N'  ||  decision == 'n')
        {
           break;
        }  
        }
        
        return total;
        

}  

Account DisplayBalance(int balance){
//    cout<<"Name - "<<act.getName()<<endl;
   cout<<"Balance- "<<balance<<endl;
}
};
Account CreateAccount()
{
    int balance
    Account Act;
    string Name;
    cout<<"Please Enter your Name: ";
    cin>>Name;
    cout<<"How much you want to deposite: ";
    cin>>balance;
    Act.setName(Name);
    Act.setBalance(balance);
    return Act;
}



int main()
{
    Account act,act1;
    int a;
    int decision;
    int deposite;
    act=CreateAccount();
    
    while(true){
    cout<<"1. Display Balance"<<endl<<"2. Deposit Amount"<<endl<<"3. Withdraw Amount"<<endl<<"4. Exit"<<endl;
    cin>>decision;
    if(decision == 1)
    {
      act.DisplayBalance(act.getBalance());
    }
    else if(decision == 2)
    {
        int amount;
        cout<<"Your balance is- "<<balance<<endl;
        cout<<"How much you want to deposite: ";
        cin>>deposite;
        act.depositeAmount(amount);
    }
    else if(decision == 3)
    {
       act.withdrawAmount(act.getBalance());
    }
    else if(decision == 4)
   {
    break;
   }
   }
  

}

