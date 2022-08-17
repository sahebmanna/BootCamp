#include<stdio.h>
int main(){
  int i,n,remainder,revarse=0;
  printf("Enter the value of n: ");
  scanf("%d",&n);

  while(n!=0){

    remainder=n%10;
    n=n/10;
    revarse=revarse*10+remainder;
  }
  printf("%d",revarse);
  return 0;
}
