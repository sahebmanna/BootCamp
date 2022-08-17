#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10];
    int i,j;
    printf("Enter a matrices :-->\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
       // printf("\n");
    }
    printf("Enter b matrices :-->\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
        // printf("\n");
    }
    printf("------------:  The sum of matrices A and B  :-----------\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%3d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
