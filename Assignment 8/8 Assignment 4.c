#include<stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=2;j<=i;j++){

           printf(" ");

        }
        for(k=1;k<=(n+1)-i;k++){

           printf("*");


    }
     printf("\n");
  }
}

