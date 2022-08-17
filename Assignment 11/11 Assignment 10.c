#include<stdio.h>
int fact(inr );
int main(){
    int x,s;
    scanf("%d",&x);
    s= fact(x);
    printf("The sum of fact is %d",s);
    return 0;

}
int fact(int n){
    int num=0,f=1;
    while(num<=n-1){
        f=f+f*num;
        num++;
    }
    return f;
}
