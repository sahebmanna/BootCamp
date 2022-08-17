#include<stdio.h>
int main(){
    int a[10],i,j,temp=0;
    printf("Enter 10 number:");

    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(i=0;i<=9;i++){
      for(j=i+1;j<=9;j++){

        if(a[i]<a[j])
            j++;

        else
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }

     }
     printf("%d ",a[i]);
    }
    return 0;
}
