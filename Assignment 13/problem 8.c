//8. Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fibo(int a){

    if(a==1||a==2)
        return(1);
    return(fibo(a-2)+fibo(a-1));
}
void main(){
    int x;
    printf("Enter the value of x:-->");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    printf("%d ",fibo(i));

}
