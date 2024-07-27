//4. Write a C++ program to accept an email address and throw an exception if it does not contain @ symbol.
#include<iostream>
using namespace std;

int main(){
    string Email;
    try{
        cout<<"Enter your Email:-->";
        getline(cin,Email);
       if(Email.find('@')==-1)
            throw runtime_error("IT is not a valid Email");
       cout<<"Your Email id is "<<Email<<endl;
    }
    catch(exception &e){
        cout<<"Exception:-->"<<e.what()<<endl;;
    }

    return 0;
}
