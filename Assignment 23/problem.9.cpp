#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a"<<" ";
    cin>>a;
    cout<<"Enter the value of b"<<" ";
    cin>>b;
    if(a<b){
        cout<<"maximum of two number is"<<" "<<b;
    }
    else if(a==b)
        cout<<"Two number is equal";
    else
        cout<<"maximum of two is"<<" "<<a;

    cout<<endl;
    return 0;
}
