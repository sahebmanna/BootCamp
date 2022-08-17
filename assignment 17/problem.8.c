#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str1[100],str2[100];
    int i,j,count=0;
    printf("--------------------:Enter a string:------------------\n");
    fgets(str1,100,stdin);
     i=0,j=0;
     while(str1[i]){
        str2[j++]=str1[i++];
        count++;

     }
     str2[i]='\0';
     printf("The enter first string is :--->%s\n",str1);
     printf("The copied string is:---> %s\n",str2);

     printf("The string length is=%d",count);

    return 0;
}
