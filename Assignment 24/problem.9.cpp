#include<iostream>
using namespace std;
int maxnum(int n,int u);
float maxnum(float a,float b);

int main(){
    int x,y;
    cout<<"Enter the value of x and y";;
    cin>>x>>y;
    if(maxnum(x,y))
        cout<<"x is grater than of y";
    else
        cout<<"y is grater than of x";
    return 0;

}
int maxnum(int n,int u){
        if(n>u)
            return 1;
        else
            return 0;
}
float maxnum(float a,float b){
        if(a>b)
           return 1;
        else
           return 0;
}
