#include<stdio.h>
void swap(char *a,char *b);
int main(){
    char a[10],b[10];
    printf("the first string is:-->");
    fgets(a,10,stdin);
    printf("the second string is:-->");
    fgets(b,10,stdin);
    swap(a,b);
    printf("first string=%ssecond string=%s",a,b);
    return 0;
}
void swap(char *a,char *b){
        char t;
        for(int i=0;i<10;i++){
            t=a[i];
            a[i]=b[i];
            b[i]=t;
        }
}

