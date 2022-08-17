#include<stdio.h>
int main(){
    int a[10][10],b[10][10];
    int i,j;
    printf("Enter a matrices :-->\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("------------:  The transpose of matrices A :-----------\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
