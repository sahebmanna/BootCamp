#include<stdio.h>
#include<string.h>
void stringcharacter(char *p,int size);
int main(){
    char str[]="sahebmanna123@gmail.com";

    stringcharacter(str,23);
}
void stringcharacter(char *p,int size){
        int alphabet=0,digit=0,special_character=0;
        for(int i=0;p[i];i++){
            if(p[i]>='a'||p[i]>='z')
                  alphabet++;
            else if(p[i]>='1'||p[i]<='9')
                  digit++;
            else
                  special_character++;
   }
   printf("alphabet number is = %d,digit number is = %d and special_character is = %d",alphabet,digit,special_character);
}
