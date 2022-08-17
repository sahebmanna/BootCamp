#include<stdio.h>
void Fibonacci(int );
int main(){
    int a;
    scanf("%d",&a);
    Fibonacci(a);
    return 0;

}
void Fibonacci(int n){
    int i,F1=0,F2=1,Fnext;
   // printf("%d %d ",F1,F2);
    for(i=1;i<=n;i++)
    {

        Fnext=F2+F1;
        printf("%d ",Fnext);
        F1=F2;
        F2=Fnext;

    }
}
