//1. Write a C++ program to demonstrate the addition of multiple types of data using
//generic functions or templates.
#include<iostream>
using namespace std;
template<class t,class u>

t add(t x,u y){
    return(x+y);
}

int main(){
    float sum=add<float,int>(5.5,7);
    cout<<"The sum of two number is:-->"<<sum;
    return 0;
}
