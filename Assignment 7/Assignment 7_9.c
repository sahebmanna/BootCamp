#include<stdio.h>
#include<conio.h>
int main(){
    int n,n1,sum=0;
    scanf("%d",&n);

    while(n!=0){
        n1=n%10;
        sum=sum+(n1*n1*n1);
        n=n/10;
    }
    if(sum==n)
        printf("IT is Armstrong number");
    else
        printf("IT is not a Armstrong number");
    return 0;
}
