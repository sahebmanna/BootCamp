#include<stdio.h>
int main(){
        char x;
        printf("Enter a character :");
        scanf("%c",&x);

        if('a'<=x && x<='z')
                printf("lower case");
        if('A'<=x && x<='Z')
                printf("uppercase");
        return 0;

}

