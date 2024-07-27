//3. Write a function to compare two strings.
#include<stdio.h>
//#include<string>
int main(){
    int i,j;
    char str[10],str2[10];
    printf("Enter a 1st string:-->");
    gets(str);
    printf("Enter a 2nd string:-->");
    gets(str2);
   int flag=strcmp(str,str2);
   if(flag==0)
    printf("string matched");
   else
    printf("string not matched");
    return 0;
}
