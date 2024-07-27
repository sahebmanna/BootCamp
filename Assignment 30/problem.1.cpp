/*1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks.
2. Write a C++ program to demonstrate try, throw and catch statements.
3. Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.
4. Write a C++ program to accept an email address and throw an exception if it does not
contain @ symbol.
5. Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits.
6. Write a C++ program to accept area pin code and throw an exception if it does not
contain 6 digits.
7. Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol.
8. Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter.
9. Write a C++ program to accept Gmail id only and throw an exception if the id does not
contain @ and gmail.com.
10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space*/
#include<iostream>
using namespace std;
void fun(int );
int main(){
    int num;
    cout<<"Enter a number:--->";
    cin>>num;
    fun(num);
    return 0;
}
void fun(int num){
    try{
        if(num>=0&&num<=9)
            throw num;
        else
        {
            cout<<"It is not a number"<<endl;
            throw;
        }
    }
    catch(int x){
        cout<<"It is a single number"<<endl;
    }
    catch(char b[]){
        cout<<b;
    }
}
