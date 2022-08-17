#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    int i;
    char j;
    printf("--------------------:Enter a string:------------------\n");
    fgets(str,100,stdin);
    for(j='a';j<='z';j++){
        for(i=0;str[i];i++){
        if(j==str[i])
            printf("%c",j);
      }
    }



    return 0;
}

