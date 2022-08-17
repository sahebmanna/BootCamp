#include<stdio.h>
int fact(int);
int main(){
    int x,s;
    printf("Enter your factorian number:");
    scanf("%d",&x);

    s=fact(x);
    printf("The factorial of %d is%d",x,s);
    return 0;

}
int fact(int a){
    int i,fac=1;
    for(i=1;i<=a;i++)
       fac=fac*i;
    return fac;
}
