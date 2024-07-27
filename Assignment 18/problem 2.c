//2. Write a function to reverse a string.
#include<stdio.h>
//#include<string>
int main(){
    int i,j;
    char str[10];
    printf("Enter a string:-->");
    gets(str);
    for(i=0;str[i]!='\0';i++);

    for(j=i;j>=0;j--){
        printf("%c ",str[j]);
    }
    return 0;
}
