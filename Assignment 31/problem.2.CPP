//2. Write a C++ program to add two numbers using single inheritance. Accept these two numbers from the user in base class and display the sum of these two numbers in derived class.
#include<iostream>
#include<cstring>
using namespace std;

class base{
protected:
    int a,b,c;
public:

    void seterA(int x){
        a=x;
    }
    void seterB(int y){
        b=y;
    }
    int geterA(){
        return a;
    }
    int geterB(){
        return b;
    }

};
class derived : public base{

public:

    void display(){

        cout<<"sum->"<<a+b<<endl;
    }
};
int main(){
    derived d;
    d.seterA(4);
    d.seterB(7);
    d.display();
    //d.geterA();
    return 0;
}
