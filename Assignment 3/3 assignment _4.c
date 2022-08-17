#include<stdio.h>
int main(){
    int x;
    float a;
    printf("Enter value of x:");
    scanf("%d",&x);

    x=x/2;
    a=x;

    if(a<x)
        printf("Number is Even");
    else
        printf("Number is odd");

    return 0;
}
