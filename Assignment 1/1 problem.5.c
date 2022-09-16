//WAP to calculate the length of String using printf function.
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int length;
    printf("enter any string:");

    gets(a);
    length=strlen(a);
    printf("%d",length);
    return 0;
}
