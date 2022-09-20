//Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>
int main(){
    int x;
    printf("Enter value of x:");
    scanf("%d",&x);

    if(x>0)
        printf("positive");

    else
        printf("NON Positive");
        return 0;
}
