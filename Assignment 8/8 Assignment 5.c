#include<stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j>=n-(i-1)&&j<=n+(i-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

  }
}

