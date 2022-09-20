//15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main(){
    int x;
    printf("Enter value of x:");
    scanf("%d",&x);

    if(x>0)
        printf("positive");

    else if(x<0)
        printf("negative");
    else
        printf("zero");

    return 0;
}
