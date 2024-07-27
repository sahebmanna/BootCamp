//4. Write a C++ Program to Swap data using function template.
#include<iostream>
using namespace std;
template<class t,class u>
t swap(t &x,u &y){
    t temp;
    temp=x;
    x=y;
    y=temp;
    return 0;
}
int main(){

    int x;
    int y;
    cout<<"Enter the value of x:->";
    cin>>x;
    cout<<"Enter the value of y:->";
    cin>>y;
    swap(x,y);
    cout<<x;
    cout<<endl;
    cout<<y;

    return 0;
}
