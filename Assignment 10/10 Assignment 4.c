#include<stdio.h>
void natural_number(int);
int main(){
    int n,s;
    scanf("%d",&n);

    natural_number(n);
    printf("\n");

    return 0;

}
void natural_number (int x){
        int i;
        for(i=1;i<=x;i++){

            printf("natural number is%d\n",i);
        }

}
