#include<stdio.h>
int main(){
    int a[10],i,S_num;
    printf("Enter 10 number:");

    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    S_num=a[0];
    for(i=1;i<10;i++){

        if(S_num>a[i])
            S_num=a[i];

     }
    printf("The Smallest number of array is %d",S_num);

     return 0;
}
