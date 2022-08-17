#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10];
    int i,j,sum=0;
    printf("Enter a matrices :-->\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter b matrices :-->\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("------------:  The multiplication of matrices A and B  :-----------\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){

            for(int k=0;k<3;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }

    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3d",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
