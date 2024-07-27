//2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>

int main(){
    char str[10][20];
    int n;
    printf("How many citys name you want to sort in 2D array:-->");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("City no %d:-->",i);
        scanf("%s",str[i]);
    }
   char temp[20];
   for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
         if((strcmp(str[i],str[j]))>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
        }
   }
   for(int i=0;i<n;i++){
        printf("%s\n",str[i]);
    }

    return 0;
}
