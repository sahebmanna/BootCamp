#include<stdio.h>
int main(){
    int i,j,n=100,count;
    for(i=1;i<=n;i++){
        count=0;
        for(j=1;j<=i;j++){
            if(i%j==0)
                count++;
        }
        if(count==2)
            printf("%d\n",i);


    }
    return 0;
}
