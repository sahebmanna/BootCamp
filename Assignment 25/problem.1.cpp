#include<iostream>
using namespace std;
class Complex{
    private:
        int real;
        int imaginary;
    public:
        void input(int a,int b){
            real=a;
            imaginary=b;
        }
        void display(){
            cout<<real<<"+"<<imaginary<<"i"<<endl;
        }
        /*void display(Complex c){
            cout<<real<<"+"<<imaginary<<"i"<<endl;
            cout<<c.real<<"+"<<c.imaginary<<"i"<<endl;
        }
        */

};
int main(){
    Complex c1,c2;
    c1.input(4,5);
    c1.display();
   // c2.input(5,6);
   // c1.display(c2);

    return 0;
}
