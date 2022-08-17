#include<stdio.h>
void N_Prime(int ,int );
int main(){
    int i,N;
    scanf("%d %d",&i,&N);
    N_Prime(i,N);
    return 0;
}
void N_Prime(int x,int y){
    int i,j,count;
    for(i=x;i<=y;i++){
        count=0;
        for(j=1;j<=y;j++){
            if(i%j==0)
              count++;
           }
        if(count==2){
            printf(" %d ",i);

        }
    }
}
