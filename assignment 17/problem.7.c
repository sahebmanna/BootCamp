#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter any string:");
    fgets(str,100,stdin);
    int i=0,character=0,number=0,specialcharacter=0;
     while(str[i]!='\0'){
        if(str[i]>='a'&&str[i]<='z'){
            character++;
        }
        else if(str[i]>='0'&&str[i]<='9'){
            number++;
        }
        else
           specialcharacter++;

        i++;

     }
     printf("character is = %d,number is = %d,special character = %d ",character,number,specialcharacter);
     return 0;
}
