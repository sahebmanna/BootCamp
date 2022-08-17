#include<stdio.h>
int HCF(int,int);
int main(){
    int x,y,s;
    scanf("%d %d",&x,&y);
    s=HCF(x,y);
    printf("The HCF is%d",s);
    return 0;

}
int HCF(int m,int n){
    int i,t;
    if(m>n){
    for(i=2;i<=m/2;i++){
        if(n%i==0&&m%i==0)
            t=i;
      }
    }
    else
        for(i=2;i<=n/2;i++){
        if(n%i==0&&m%i==0)
            t=i;
      }

    return t;
}
