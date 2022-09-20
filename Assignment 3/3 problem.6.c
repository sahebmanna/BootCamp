//6. Write a program to print greater between two numbers. Print one number of both are
//the same.
#include<stdio.h>
int main(){
   int x1,x2;
   printf("Enter value of x1 and x2 :");
   scanf("%d %d",&x1,&x2);

   if(x1>x2)
        printf("The number x1 %d is largest",x1);

    else if(x2>x1)
        printf("The number x2 %d is largest",x2);

    else
        printf("the number %d and %d is Equal",x1,x2);

    return 0;
}
