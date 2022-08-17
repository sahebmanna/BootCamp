#include<stdio.h>
int main(){
    int i,n,num1=12,num2=30;
    for(i=1;i<=num2/2;i++){
        if(num1%i==0&&num2%i==0)
            n=i;

        }
    printf("HCF is %d",n);
    return 0;

}
