#include<stdio.h>
int main(){
    int x;
    printf("Enter value of x:");
    scanf("%d",&x);

    if(x%5==0)
        printf("Divisible by 5");

    else
        printf("NON Divisible by 5 ");
    return 0;
}
