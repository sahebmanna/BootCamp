#include<stdio.h>
int Reverse_array(int b[],int );
void input(int c[],int );
int main(){
    int a[5],s;

    input(a,5);
    s=Reverse_array(a,5);
    printf(" %d",s);

    return 0;
}
int Reverse_array(int b[],int n){
    int D;
     for(int i=n-1;i>=0;i--){

            D=b[i];
            printf("%d ",b[i]);

      }


     return D;
}
void input(int c[],int n){
    for(int i=0;i<=n-1;i++)
        scanf("%d",&c[i]);
}
