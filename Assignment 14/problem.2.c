#include<stdio.h>
int main(){
    int a[10],i,sum=0,avg=0;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
        avg=sum/10;
    }
    printf("The sum of ARRAY is %d",avg);
    return 0;
}
