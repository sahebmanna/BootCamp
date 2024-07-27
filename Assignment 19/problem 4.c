//4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main(){
    char str[10][20];
    int n;
    printf("Strings in 2D array:-->");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("City no %d:-->",i);
        scanf("%s",str[i]);
    }
    printf("WHICH STRING YOU WANT SEARCH :--> ");
    char search[20];
    scanf("%s",search);
   int i=0;
   for(int i=0;i<n;i++){

         if(search==str[i]){
            printf("the string in the list");
            printf("The string no is %d",i);
            break;
         }else{
            printf("The string not in the list!\n");
            break;
         }
   }
    return 0;
}
