#include<stdio.h>
int main(){
        char x;
        printf("Enter a character :");
        scanf("%c",&x);

        if('a'<=x && x<='z')
                printf("lower case");
        else if('A'<=x && x<='Z')
                printf("uppercase");
        else if(48<=x && x<= 57)
                printf("digit");
        else
                printf("special character");

        return 0;

}


