#include<stdio.h>
void odd_natural_number(int);
int main(){
    int n,s;
    scanf("%d",&n);

    odd_natural_number(n);
    printf("\n");

    return 0;

}
void odd_natural_number (int x){
        int i,m;
        for(i=1;i<=x;i++){
            m=i*2-1;
            printf("odd natural number is%d\n",m);
        }

}
