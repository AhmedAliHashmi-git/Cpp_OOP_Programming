#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
  while(true)
  {
  	string Movie_Name;
   double adult_ticket_price;
   double child_ticket_price;
   int AdultTicketSold;
   int ChildTicketSold;
   double Percentage_Amount_grossAmount;
   double Gross_Amount;
   double PercentageToDonate;
   double Percentage_grossAmount;
   cout<<"Enter name of the movie is: ";
   getline(cin,Movie_Name);
   cout<<"How many adult ticket sold:";
   cin>>AdultTicketSold;
   cout<<"How many child ticket sold:";
   cin>>ChildTicketSold;
   cout<<"Price of adult ticket: ";
   cin>>adult_ticket_price;
   cout<<"Price of child ticket: ";
   cin>>child_ticket_price;
   cout<<"How much percentage you want to donate to charity: ";
   cin>>PercentageToDonate;
   Gross_Amount=(adult_ticket_price*AdultTicketSold)+(child_ticket_price*ChildTicketSold);
   Percentage_Amount_grossAmount =PercentageToDonate*Gross_Amount/100;
   Percentage_grossAmount=Percentage_Amount_grossAmount*100/Gross_Amount;
   cout<<endl;
   
   cout<<string(60,'*')<<""<<endl;
   cout<<"Movie Name: "<<setw(30)<<setfill('.')<<" "<<Movie_Name<<endl;
   cout<<"Number Of Ticket Sold: "<<setw(30)<<setfill('.')<<" "<<AdultTicketSold+ChildTicketSold<<endl;
   cout<<"Gross Amount: "<<setw(30)<<setfill('.')<<" "<<showpoint<<fixed<<setprecision(2)<<left<<setw(2)<<setfill('$')<<Gross_Amount<<endl;
   cout<<"Percentage of Gross Amount Donated: "<<showpoint<<fixed<<setprecision(2)<<Percentage_grossAmount<<"%"<<endl;
   cout<<"Amount Donated: "<<setw(30)<<setfill('.')<<" "<<showpoint<<fixed<<setprecision(2)<<setw(2)<<setfill('$')<<Percentage_Amount_grossAmount<<endl;
   cout<<"Net Sale: "<<setw(30)<<setfill('.')<<" "<<showpoint<<setw(2)<<setfill('$')<<fixed<<setprecision(2)<<Gross_Amount-Percentage_Amount_grossAmount<<endl;
   return 0;
   } 
}