#include<stdio.h>
int main(){
  int i,m,n;
  printf("Enter the value of m,n:");
  scanf("%d %d",&m,&n);

  for(i=1;i<=m*n;i++){
        if(i%m==0&&i%n==0){

            break;
        }
  }
  printf("LCM is %d",i);
  return 0;
}
