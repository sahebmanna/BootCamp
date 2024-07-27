//8. Write a function to count words in a given string
#include<stdio.h>
//#include<string>
int fun(char str[]){
     int i,count=1;

    for(i=0;str[i]!=NULL;i++){
        if(str[i]==' '&&str[i+1]!=' '){
            count++;
        }
    }
    return count;
}

int main(){
    int i;
    char str[100];
    printf("Enter a string:-->");
    gets(str);
    int x=fun(str);
    printf("Words in a string is =%d",x);
    return 0;
}
