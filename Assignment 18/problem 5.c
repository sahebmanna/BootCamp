//5. Write a function to transform a string into lowercase
#include<stdio.h>
//#include<string>
int main(){
    int i;
    char str[10];
    printf("Enter a string:-->");
    gets(str);
    for(i=0;str[i]!=NULL;i++){
       str[i]=str[i]+32;
    }
    printf("%s",str);
    return 0;
}
