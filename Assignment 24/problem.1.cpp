#include<iostream>
using namespace std;
void prime(int a);
int main(){
    int x;
    cin>>x;
    prime(x);
    return 0;

}
void prime(int a){
    int flag=0;
    for(int i=2;i<=a/2;i++){
        if(a>=1&&a%i==0)
            flag=1;
    }
    if(flag==0)
      cout<<"The number is prime\n";
    else
      cout<<"IT is non prime";

}

