#include<stdio.h>
void N_Prime(int );
int main(){
    int N;
    scanf("%d",&N);
    N_Prime(N);
    return 0;
}
void N_Prime(int x){
    int i,j,count;
    for(i=1;i<=x;i++){
        count=0;
        for(j=1;j<=x;j++){
            if(i%j==0)
              count++;
           }
        if(count==2){
            printf("The prime number is %d\n",i);

        }
    }
}
