#include<stdio.h>
int main(){
    int a[10][10];
    int i,j,count=0;
    printf("Enter a matrices :-->\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]==0)
                count++;
        }

    }
    if(count>(3*3)/2){
    printf("IT is a sparse matrices");
    }
    else
    printf("IT is not a sparse matrices");


    return 0;
}
