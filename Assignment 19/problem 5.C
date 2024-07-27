//5. Suppose we have a list of email addresses, check whether all email addresses have‘@’ in it. Print the odd email out.
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
    //printf("WHICH STRING YOU WANT SEARCH :--> ");
    char search='@';
    //scanf("%s",search);
   int i,j;
   for(int i=0;i<n;i++){

         if(strchr(str[i],search)!=0){
            printf("the Email in the list");
            printf("The Email is %s",str[i]);

         }else{
            printf("This is not in the Email catagory!\n");
         }
    }

    return 0;
}
