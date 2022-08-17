#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100],character;
    int  i,count=0;
    printf("--------------------:Enter a string:------------------\n");
    fgets(str,100,stdin);
    printf("Enter a character which you want to find:-->");
    scanf("%c",&character);

    for(i=0;str[i]!=NULL;i++){
        if(character==str[i])
                count++;
    }
    printf("The frequency of '%c'  is =%d",character,count);




    return 0;
}

