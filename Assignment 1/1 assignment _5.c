#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int length;
    printf("enter any string:");
   // scanf("%c",&a);
    gets(a);
    length=strlen(a);
    printf("%d",length);
    return 0;
}
