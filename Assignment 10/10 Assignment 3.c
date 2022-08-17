#include<stdio.h>
float even_odd(int);
int main(){
    int n,s;
    scanf("%d",&n);
    s=even_odd(n);
    if(s==1)
        printf("it is even number");
    else
        printf("it is odd number");
    return 0;

}
float even_odd(int x){
    if(x%2==0)
        return 1;

}
