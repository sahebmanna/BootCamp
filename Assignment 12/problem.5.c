#include<stdio.h>
void Natural_num(int );
int main(){
    int x;
    scanf("%d",&x);
    Natural_num(x);
    return 0;

}
void Natural_num(int n){
        if(n>0){
            Natural_num(n-1);
            printf(" %d",2*n);
        }
}

