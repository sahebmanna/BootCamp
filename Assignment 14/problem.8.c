#include<stdio.h>
int main(){
    int a[6],i,smollest,second_smollest;
    printf("Enter 6 number:");

    for(i=0;i<6;i++)
        scanf("%d",&a[i]);

     smollest=a[0];
    for(i=1;i<=5;i++){

        if(smollest>a[i])
        {
            second_smollest=smollest;
            smollest=a[i];
        }
        else
        {

            if(second_smollest>a[i])
                second_smollest=a[i];
        }
    }
     printf("%d ",second_smollest);

    return 0;
}
