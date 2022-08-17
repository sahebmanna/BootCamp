#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n,count;
    scanf("%d",&n);
    for(i=n ;i>0;i++){
        count=0;
        for(j=1;j<=i;j++){
            if(i%j==0)
                count++;
        }
        if(count==2){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
