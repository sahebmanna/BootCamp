#include<stdio.h>
#include<string.h>
//How to handled the pointer in the program
int main(){
    int a;
    int *p;
    a=99;
    p=&a;
    printf("The value of a is %d\n",a);
    printf("The address of a is %d\n",&a);
    printf("The value of p is %d\n",p);
    printf("The  of a is %d",*p);
}
