#include<stdio.h>
int main(){
    int a[6],i;
    printf("Enter 6 number:");

    for(i=0;i<6;i++)
        scanf("%d",&a[i]);


    for(i=5;i>=0;i--){
        printf("%d ",a[i]);

    }

    return 0;
}
