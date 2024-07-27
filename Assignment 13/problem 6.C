//6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int fact(int a){
    int x;
    if(a==1){
        return 1;
    }

    return (a*fact(a-1));
}
int main(){
    int x;
    printf("Enter the value of x:-->");
    scanf("%d",&x);
    int y=fact(x);
    printf("factorial of %d is = %d",x,y);
    return 0;
}
