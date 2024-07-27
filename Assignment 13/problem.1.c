/*[1. Write a recursive function to calculate sum of first N natural numbers]
2. Write a recursive function to calculate sum of first N odd natural numbers
3. Write a recursive function to calculate sum of first N odd natural numbers
4. Write a recursive function to calculate sum of squares of first n natural numbers
5. Write a recursive function to calculate sum of digits of a given number
6. Write a recursive function to calculate factorial of a given number
7. Write a recursive function to calculate HCF of two numbers
8. Write a recursive function to print first N terms of Fibonacci series
9. Write a program in C to count the digits of a given number using recursion.
10. Write a program in C to calculate the power of any number using recursion*/

#include<stdio.h>
int sum_fun(int a){
    int x;
    if(a==1){
       return 1;
    }
    x=a+sum_fun(a-1);
    return x;

}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a=sum_fun(n);
    printf("The sum of N natural number is =%d",a);
return 0;
}
