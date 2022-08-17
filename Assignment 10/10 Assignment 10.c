#include<stdio.h>
void primefact(int);
int main(){
    int x;
    printf("Enter your primefactorian number:");
    scanf("%d",&x);

    primefact(x);

    return 0;

}
void primefact(int a){
    int i;
    for(i=2;i<=a/2;i++)
        while(a%i==0){
            printf("%d ",i);
            a=a/i;
           }
}
