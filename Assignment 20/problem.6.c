#include<stdio.h>
#include<string.h>
void string_length(int *p){
int main(){
    char str[]={'s','a','h','e','b'};

    string_length(str);
}
void string_length(char *p){

        for(int i=0;p[i];i++);
        printf("The length if the array is %d",i);
}
