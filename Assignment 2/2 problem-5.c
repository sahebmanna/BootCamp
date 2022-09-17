//5. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main(){
    int x=257,A,B,c;
    A=x%10;
    x=x/10;
    B=x%10;
    x=x/10;
    c=x%10;
    printf("%d",B+A+c);
    return 0;
}
