//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
int main(){
    int num = 11;

    if(num%2==0&&num%3==0)
        printf("The number devisible by 2 and 3");
    else
        printf("the number dose not devisible by 2 and 3");

    return 0;

}
