#include<stdio.h>
int main(){
    int i,m,n1=0,n2=1,next;
    scanf("%d",&m);


    if(m==1)
        printf("0");
    else if(m==2)
        printf("1");

    else
    {
      for(i=3;i<=m;i++){
        next=n1+n2;
        n1=n2;
        n2=next;
      }
      printf("%d",next);
    }
    return 0;
}
