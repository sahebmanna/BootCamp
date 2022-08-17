#include<stdio.h>
int main(){
    int x;
    printf("Enter value of x :");
    scanf("%d",&x);

    int result=x&1;

    if(result==1)
        printf("IT is Odd");
    else
        printf("Even");

    return 0;

}
