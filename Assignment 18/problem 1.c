/*[1. Write a function to calculate length of the string]
2. Write a function to reverse a string.
3. Write a function to compare two strings.
4. Write a function to transform string into uppercase
5. Write a function to transform a string into lowercase
6. Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)
7. Write a function to check whether a given string is palindrome or not.
8. Write a function to count words in a given string
9. Write a function to reverse a string word wise. (For example if the given string is
�Mysirg Education Services� then the resulting string should be �Services Education
Mysirg� )
10. Write a function to find the repeated character in a given string*/

#include<stdio.h>
//#include<string>
int main(){
    int i;
    char str[10];
    printf("Enter a string:-->");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    printf("Length of the string is = %d",i);
    return 0;
}
