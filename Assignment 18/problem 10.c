//10. Write a function to find the repeated character in a given string
#include<stdio.h>
int main(){
    int i,j;
    int count=0;
    char str[10];
    printf("Enter a string:-->");
    gets(str);
    int l=strlen(str);
    for(i=0;i<l;i++){
       for(j=i+1;i<l;j++){
        if(str[i]==str[j])
        printf("The repeated character in a string is=%c\n",str[j]);
        break;
      }
    }

    return 0;
}
