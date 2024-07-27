//6. Write a C++ program to accept area pin code and throw an exception if it does not contain 6 digits.
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string Pin;//="1234567890";
    try{
        cout<<"Enter your Pincode:-->";
        getline(cin,Pin);
        //int x=strlen(Phonenumber);
       int x=Pin.length();
       if(x!=6)
            throw runtime_error("IT is not a valid Pincode");
       cout<<"Your Pincode "<<Pin<<" is valid"<<endl;
    }
    catch(exception &e){
        cout<<"Exception:-->"<<e.what()<<endl;;
    }

    return 0;
}
