#include<stdio.h>
int main(){
    int a[10][10],b[10][10];
    int i,j,sum=0;
    printf("Enter a matrices :-->\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("------------:  The sum of row's of matrices A :-----------\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=sum+a[i][j];
        }
        printf("%d",sum);
        sum=0;
        printf("\n");
    }
    printf("------------:  The sum of column's of matrices A :-----------\n");

        for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=sum+b[i][j];
        }
        printf("%3d",sum);
        sum=0;
    }


    return 0;
}
