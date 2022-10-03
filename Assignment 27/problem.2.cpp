//2. Write a C++ program to overload unary operators that is increment and decremen
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
        Complex operator-(){
            Complex temp;
            temp.a=-a;
            temp.b=-b;
            return temp;
        }

};
int main(){
    Complex c1(4,5),c2;
    c2=-c1;
    c2.showData();
    cout<<endl;
    return 0;
}
