#include<stdio.h>
void rotated_array(int b[],int ,int);
void input(int c[],int );
int main(){
    int a[10],d=3;

    input(a,10);
    rotated_array(a,10,d);
    for(int i=0;i<=9;i++){
    printf(" %d ",a[i]);
    }
    return 0;
}
void rotated_array(int b[],int n,int d){
     while(d){
        int temp=b[0];
        for(int i=0;i<=8;i++){
            b[i]=b[i+1];
        }
        b[n-1]=temp;
        d--;
     }
}
void input(int c[],int n){
    for(int i=0;i<=n-1;i++)
        scanf("%d",&c[i]);
}
