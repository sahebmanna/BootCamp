//6. Write a function to check whether a given string is an alphanumeric string or not.
#include<stdio.h>
//#include<string>
int main(){
    int i;
    char str[10];
    int M=0,N=0;
    printf("Enter a string:-->");
    gets(str);
    for(i=0;str[i]!=NULL;i++){
       if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
         M=1;
       if(str[i]>='0'&&str[i]<='9')
         N=1;
    }
    if(M==1&&N==1){
        printf("IT is an alphanumerical number");
    }else
        printf("IT is not an alphanumerical number!");
    return 0;
}
