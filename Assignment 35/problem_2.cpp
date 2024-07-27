
//2. Write a C++ Program to find Largest among two numbers using function template.
#include<iostream>
using namespace std;
template<class t,class u>

void largeoftwo(t x,u y){
    if(x>y){
        cout<<"the large number is:->"<<x;
    }else{
        cout<<"the large number is:->"<<y;
    }

}
int main(){
    largeoftwo<float,int>(5.7,6);

    return 0;
}
