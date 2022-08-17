#include<stdio.h>
int main(){
    char str[]={'S','A','H','E','B','M','A','N','N','A','\0'};
     int j;
    for(j=0;str[j];j++){
        str[j]+=32;
        printf("%c",str[j]);

    }
    return 0;
}
