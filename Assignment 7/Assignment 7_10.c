#include<stdio.h>
#include<conio.h>
int main(){
    int i,re,x,sum;

    for(i=1;i<=1000;i++){
            sum=0;
            x=i;
            while(x!=0)
                {
                    re=x%10;
                    sum=sum+(re*re*re);
                    x=x/10;
                }
            if(sum==i)
                printf("%d\n",i);
    }

   return 0;
}

