#include<iostream>
using namespace std;
void swap(int &,int &);
int main(){
    int x=5,y=7;
    swap(x,y);
    cout<<"The value of x is:-->"<<x<<" and"<<endl<<"value of y is:-->"<<y;
    return 0;

}
void swap(int &a,int &b){
        int temp=0;
        temp=a;
        a=b;
        b=temp;
        //cout<<"The value of x is:-->"<<a<<"and"<<endl<<"value of y is:-->"<<b;
}
