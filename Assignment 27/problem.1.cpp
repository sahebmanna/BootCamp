/*1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/
#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        Complex(){
            cout<<"Default constructor call";
        }
        Complex(int x,int y){
           a=x;
           b=y;
        }
        void showData(){
            cout<<endl<<"real="<<a<<" and "<<"imaginary="<<b;
        }
        Complex operator+(Complex c){
            Complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
        Complex operator-(Complex c){
            Complex temp;
            temp.a=a-c.a;
            temp.b=b-c.b;
            return temp;
        }
        Complex operator*(Complex c){
            Complex temp;
            temp.a=a*c.a;
            temp.b=b*c.b;
            return temp;
        }
        bool operator==(Complex c){

            if(a==c.a&&b==c.b)
                return 0;
            else
                return 1;
        }
};
int main(){
    Complex c1(5,8),c2(5,8),c3,c4,c5;
    c1.showData();
    c2.showData();
    c3=c1+c2;
    c4=c2-c1;
    c5=c1*c2;
    c3.showData();
    c4.showData();
    c5.showData();
    c1==c2;
    if(1){
        cout<<"both are not equal";
    }
    else
        cout<<"both are equal";
    cout<<endl;
    return 0;
}
