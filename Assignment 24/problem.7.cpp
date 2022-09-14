#include<iostream>
using namespace std;
int add(int a,int b,int c=0);
int main(){
    int x,y,z,w,q;
    cout<<"Enter value of x,y,z:-->";
    cin>>x>>y>>z;
    w=add(x,y);
    cout<<"sum of x,y is :-->"<<w;
    q=add(x,y,z);
    cout<<endl<<"sum of x,y,z:-->"<<q;
    return 0;

}
int add(int a,int b){
        return a+b;
}
int add(int a,int b,int c){
        return a+b+c;
}
