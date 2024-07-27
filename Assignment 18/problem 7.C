//7. Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string>
int main(){
    int i,j=0,l;
    char str[10];
    printf("Enter a string:-->");
    gets(str);
    l=5;
    for(i=0;i<=l/2;i++){
        if(str[i]==str[l-1-i]);
        else
            j++;
    }
    if(j==0)
        printf("The string is palindrome");
    else
        printf("The string is not a palindrome");

    return 0;
}
