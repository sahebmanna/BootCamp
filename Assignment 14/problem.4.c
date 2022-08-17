#include<stdio.h>
int main(){
    int a[10],i,G_num;
    printf("Enter 10 number:");

    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    G_num=a[0];
    for(i=1;i<10;i++){

        if(G_num<a[i])
            G_num=a[i];

     }
    printf("The greatest number of array is %d",G_num);

     return 0;
}
