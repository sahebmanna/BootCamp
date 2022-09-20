//7. Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots
#include<stdio.h>
int main(){
   int D,b,a,c;
   printf("Enter value of a,b,c :");
   scanf("%d %d %d",&b,&a,&c);

   D=b*b-4*a*c;

   if(D>0)
        printf("Real and Distinct");

    else if(D<0)
        printf("Imaginary");

    else
        printf("Real and Equal");

    return 0;
}
