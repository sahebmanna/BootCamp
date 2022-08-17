#include<stdio.h>
int main(){
    int m,n1=0,n2=1,next;
    next=n1+n2;
    scanf("%d",&m);

    if(m==0)
        printf("Is in fibonacci series");
    while(next<m){
        n1=n2;
        n2=next;
        next=n1+n2;
    }
    if(next==m)
        printf("Is in fibonacci series");
    else
        printf("Not in fibonacci series");

    return 0;
}
