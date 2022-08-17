#include<stdio.h>
int main(){
    int a[10][10];
    int i,j;
    printf("Enter a matrices :-->\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("------------:  The lower triangle of matrices A :-----------\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                if(i<j)
                    a[i][j]=0;
        }

    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
