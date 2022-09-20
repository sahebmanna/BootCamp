//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main(){
    int num = 21;

    if(num%3==0&&num%7==0)
        printf("The number devisible by 3 and 7");
    else
        printf("the number dose not devisible by 3 and 7");

    return 0;

}
