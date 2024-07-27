//6. Create a complex class and overload assignment operator for that class.

#include<iostream>
#include<stdio.h>
using namespace std;
class Complex
{   int real;
    int imagenary;
    public:
        Complex(int x,int y){
            real= x;
            imagenary= y;
        }
        void ShowFun(){
            cout<<"real="<<real<<" "<<"imagenary="<<imagenary<<endl;
        }
        void operator=(Complex c){

        real=c.real;
        imagenary=c.imagenary;

        }

};
int main(){
    Complex s1(4,9),s2(11,10);
    cout<<"First object s1 is";
    s1.ShowFun();
    cout<<"Second object s2 is";
    s2.ShowFun();

    s1=s2;
    cout<<"First object s1 is";
    s1.ShowFun();
    return 0;
}
