#include<stdio.h>
int main(){
    char str[]={'s','a','h','e','b','m','a','n','n','a','\0'};
     int j;
    for(j=0;str[j];j++){
        str[j]-=32;
        printf("%c",str[j]);

    }
    return 0;
}
