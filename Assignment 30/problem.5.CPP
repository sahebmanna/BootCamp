//5. Write a C++ program to accept a mobile number and throw an exception if it does not contain 10 digits.

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string Phonenumber;//="1234567890";
    try{
        cout<<"Enter your Phonenumber:-->";
        getline(cin,Phonenumber);
        //int x=strlen(Phonenumber);
       int x=Phonenumber.length();
       if(x!=10)
            throw runtime_error("IT is not a valid number");
       cout<<"Your Phonenumber "<<Phonenumber<<" is valid"<<endl;
    }
    catch(exception &e){
        cout<<"Exception:-->"<<e.what()<<endl;;
    }

    return 0;
}
