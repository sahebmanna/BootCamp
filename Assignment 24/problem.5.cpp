#include<iostream>
using namespace std;

int Fibonacci(int );
int main(){
    int a;
    cin>>a;
    if(Fibonacci(a))
        cout<<"IT is in Fibonacci series";
    else
        cout<<"IT is not in Fibonacci series";
    return 0;

}
int Fibonacci(int input){
    int F1=0,F2=1,Fnext;

    while(Fnext<input)
    {
        Fnext=F2+F1;
        F1=F2;
        F2=Fnext;


    }
    if(Fnext>=input)
            return 1;
    else
            return 0;

}
