//3. Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
#include<string.h>
int main(){
    char str[10][20];
    int n;
    printf(" 2D array:-->");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("City no %d:-->",i);
        scanf("%s",str[i]);
    }


   for(int i=0;i<n;i++){
        printf("%s\n",str[i]);
    }

    return 0;
}
