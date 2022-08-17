#include<stdio.h>
int main(){
    int a[6],i,largest,second_largest;
    printf("Enter 6 number:");

    for(i=0;i<6;i++)
        scanf("%d",&a[i]);

     largest=a[0];
    for(i=1;i<=5;i++){

        if(largest<a[i])
        {
            second_largest=largest;
            largest=a[i];
        }
        else
        {

            if(second_largest<a[i])
                second_largest=a[i];
        }
    }
     printf("%d ",second_largest);

    return 0;
}
