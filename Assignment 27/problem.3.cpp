//3. Write a C++ program to add two complex numbers using operator overloaded by a
//friend function.

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
            cout<<endl<<"a="<<a<<" "<<"b="<<b;
        }
        friend Complex operator+(Complex ,Complex );
};
Complex operator+(Complex c,Complex d){
            Complex temp;
            temp.a=c.a+d.a;
            temp.b=c.b+d.b;
            return temp;
        }
int main(){
    Complex c1(4,5),c2(6,7),c3;
    c3=c2+c1;
    c3.showData();
    cout<<endl;
    return 0;
}
