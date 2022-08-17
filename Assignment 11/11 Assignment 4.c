#include<stdio.h>
int NextPrimeNumber(int );
int main(){
    int x,A;
    scanf("%d",&x);
    A=NextPrimeNumber(x);
    printf("The next prime number is %d",A);

    return 0;
}
int NextPrimeNumber(int n){
        int i,j,count;
        for(i=n;i>0;i++){
            count=0;
            for(j=1;j<=i;j++){
                if(i%j==0)
                    count++;
            }
            if(count==2){

                break;
            }
        }
        return i;
      }

