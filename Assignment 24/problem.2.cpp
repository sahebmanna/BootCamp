#include<iostream>
#include<stdio.h>
using namespace std;
void input(int [],int);
void display(int[],int);
int Gnum(int b[],int size);
int main(){

    int a[20],x=10;

    cout<<"Enter the value of array:-->";
    input(a,10);
    display(a,x);

    cout<<"\nThe grater number is:-->"<<Gnum(a,10);

    return 0;

}

void input(int b[],int size){
     for(int i=0;i<size;i++){
        cin>>b[i];
     }
}
void display(int b[],int size){
        for(int i=0;i<size;i++){
            cout<<b[i]<<" ";
        }
}
int Gnum(int b[],int size){
    int i;
    int  G_num=b[0];
    for(i=1;i<size;i++){
        if(G_num<b[i])
                G_num=b[i];

    }
    return G_num;
}



