#include<stdio.h>
int main(){
    int a[10],i,se=0,so=0;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);

        if(a[i]%2==0)
            se=se+a[i];
        else
            so=so+a[i];

      }
       printf("Sum of even number is %d and Sum of Odd number is %d ",se,so);
       return 0;
}
