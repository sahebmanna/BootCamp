#include<stdio.h>
void rev_string(char *p,int size);
int main(){
    char str[]="saheb manna";
    rev_string(str,11);
}
void rev_string(char *p,int size){
    int i,z=0;
    for(i=size-1;i>=0;i--){
       z=p[i];
       printf("%c",z);
    }

}

