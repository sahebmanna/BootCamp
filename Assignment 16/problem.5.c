#include<stdio.h>
int main(){
    int a[10][10];
    int i,j,sum=0;
    printf("Enter a matrices :-->\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("------------:  The left diagonal of matrices A :-----------\n");

    for(i=2;i>=0;i--){
        for(j=0;j<3;j++){
                if(i==j)
                    sum=sum+a[i][j];
        }
    }
    printf("The sum of left diagonal =%d",sum);

    return 0;
}
