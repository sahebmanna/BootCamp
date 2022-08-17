#include<stdio.h>
int main(){
    int i,m,n1=0,n2=1,next;
    scanf("%d",&m);


    if(m==1)
        printf("0");
    else if(m==2)
        printf("0 1");

    else
    {
      printf("%d %d",n1,n2);
      for(i=3;i<=m;i++){
        next=n1+n2;
        printf("%4d",next);
        n1=n2;
        n2=next;
      }
    }
    return 0;
}
