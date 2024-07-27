/*8 - In a bank, different customers have savings account. Some customers may
have taken a loan from the bank. So bank always maintain information about
bank depositors and borrowers.
Design a Base class Customer (name, phone-number). Derive a class
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’
customers.
*/
#include<iostream>
using namespace std;
class customer
{
public:
    char name[25];
    long long int phone_number;
};
class depositor : public customer{
public:
    long long int account_no;
    int balance;

};
class borrower : public depositor{
  long long int loan_no;
  int loan_amount;
public:
    void Enter_details(){
     cout<<"------------------------------------------------";
     cout<<"\nEnter customer name:-->";
     cin>>name;
     cout<<"Enter customer phone number:-->";
     cin>>phone_number;
     cout<<"Enter customer account number:-->";
     cin>>account_no;
     cout<<"Enter customer account balance:-->";
     cin>>balance;
     cout<<"account holder loan no:-->";
     cin>>loan_no;
     cout<<"account holder loan amount:-->";
     cin>>loan_amount;
     cout<<"------------------------------------------------";
    }
    void show_details(){
     cout<<"------------------------------------------------";
     cout<<"\ncustomer name:-->"<<name<<endl;

     cout<<"Enter customer phone number:-->"<<phone_number<<endl;

     cout<<"Enter customer account number:-->"<<account_no<<endl;

     cout<<"Enter customer account balance:-->"<<balance<<endl;

     cout<<"account holder loan no:-->"<<loan_no<<endl;

     cout<<"account holder loan amount:-->"<<loan_amount<<endl;

     cout<<"------------------------------------------------";
    }

} ;
int main(){
    borrower b[100];
    int n;
    cout<<"------------------------------------------------";
    cout<<"\n How many customer details you want to enter:-->";
    cin>>n;
    for(int i=0;i<n;i++){
        b[i].Enter_details();
    }
    cout<<"Show customer details:-->"<<endl;
    for(int i=0;i<n;i++){
        b[i].show_details();
    }
    cout<<"------------------------------------------------";
    return 0;
}
