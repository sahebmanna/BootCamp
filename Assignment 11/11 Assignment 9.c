#include<stdio.h>
void squer(int );
int main(){
    int n;
    scanf("%d",&n);
    squer(n);
    return 0;

}
void squer(int x){
    int y;
    y=x*x;
    printf("The squer of %d is %d",x,y);
}
