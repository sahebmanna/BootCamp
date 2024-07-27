/*2. Write a C++ program to demonstrate try, throw and catch statements.*/
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"X:--->";
    cin>>num;
    try{
            throw num;

    }
    catch(int x){
        cout<<"It is a positive number="<<x;
    }

    return 0;
}
