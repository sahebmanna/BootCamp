/*6. Write a C++ program to demonstrate how a common friend function can
be used to exchange the private values of two classes. (Use call by
reference method).*/

#include<iostream>
#include<cstring>
using namespace std;

class A{
    int x;
public:
    void set(int x){
        this->x=x;
    }


friend void xyz(int,int);
};
class B{
    int y;
public:
    void set(int y){
        this->y=y;
    }


friend void xyz(int,int);

};
void xyz(int x,int y){
    int temp;
    A a;
    a.set(x);
    B b;
    b.set(y);
    temp=a.x;
    a.x=b.y;
    b.y=temp;
    cout<<"after swapint the value of var a is :"<<endl;
    cout<<a.x<<endl;
    cout<<"after swapint the value of var b is :"<<endl;
    cout<<b.y<<endl;

}
//void show(){
 //   cout<<"after swapint the value of var is :"<<endl;
 //   cout<<a.x<<b.y;
//}
int main(){
    int a,b;
 cout<<"Enter the value of a is :-->";
 cin>>a;
 cout <<"Enter the valueof b is:-->";
 cin>>b;
 xyz(a,b);
 //show();
    return 0;
}
