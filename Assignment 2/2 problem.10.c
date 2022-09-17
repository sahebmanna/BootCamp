//10. Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)
#include<stdio.h>
int main(){
    int x,z;
    printf("Enter value of x:");
    scanf("%d",&x);

    z=x/10;
    z=z*10;
    printf("%d",z);
    return 0;

}
