//6. Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>

int main(){
    char str[10][20];
    int n;
    printf("How many string you want to insert in 2D array:-->");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("string no %d:-->",i);
        scanf("%s",str[i]);
    }
    int i,j,k=0;

   for( i=0;i<n;i++){
        int l=strlen(str[i]);
        for(j=0;j<=l/2;j++){
            if(str[i][j]==str[i][l-1-j]);
            else
                k++;
        }
        if(k==0)
           printf("The palindrome string is %s",str[i]);
        k=0;
   }
    return 0;
}
