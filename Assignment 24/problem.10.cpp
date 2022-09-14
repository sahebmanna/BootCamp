#include<iostream>
using namespace std;
int add(float a,float b);
int main(){
    int x,y,w;
    cout<<"Enter value of x,y:-->";
    cin>>x>>y;
    w=add(x,y);
    cout<<"sum of x,y is :-->"<<w;

    return 0;

}
int add(float a,float b){
        return a+b;
}
