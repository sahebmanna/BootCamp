/*1. Write a program to calculate sum of first N natural numbers
2. Write a program to calculate sum of first N even natural numbers
3. Write a program to calculate sum of first N odd natural numbers
4. Write a program to calculate sum of squares of first N natural numbers
5. Write a program to calculate sum of cubes of first N natural numbers
6. Write a program to calculate factorial of a number
7. Write a program to count digits in a given number
8. Write a program to check whether a given number is a Prime number or
not
9. Write a program to calculate LCM of two numbers
10. Write a program to reverse a given number
*/
#include<stdio.h>
int main(){
  int i,n,sum=0;
  printf("Enter the value of n:");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    sum=sum+i;

  }
  printf("%d",sum);
  return 0;
}
