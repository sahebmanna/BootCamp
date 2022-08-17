#include<stdio.h>
int main(){
    int x,i,n1,n2;
    scanf("%d %d",&n1,&n2);

    for(i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
            x=i;

    }
    if(x==1)
            printf("the number%d and%d is co-prime number",n1,n2);

     else
            printf("those are not  co-prime\n");
    return 0;

}
