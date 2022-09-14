#include<iostream>
#include<stdio.h>
using namespace std;
int X_to_the_power_y(int a,int b);
int main(){
    int x,y;
    cout<<"Enter the value of x and y:-->";
    cin>>x>>y;
    cout<<"X_to_the_power_y is:-->"<<X_to_the_power_y(x,y);
    return 0;

}
int X_to_the_power_y(int a,int b){

        int  multi=1;
        for(int i=1;i<=b;i++){
            multi=a*multi*1;
        }
        return multi;
}





