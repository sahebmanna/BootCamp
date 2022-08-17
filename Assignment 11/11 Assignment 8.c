#include<stdio.h>
//#include<math.h>
int pascal (int );
int main(){
    pascal(5);
    return 0;
}
int fact(int n){
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int comb(int n,int r){
return fact(n)/(fact(r)*fact(n-r));
}
int perm(int n,int r)
{
    return fact(n)/fact(n-r);
}
int pascal (int n){
    int i,j;
   /* for(i=0;i=n;i++)
        for(j=1;j<=n;j++){
            printf(" ");
        }
    */
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            printf("%3d",comb(i,j));

        }
        printf("\n\n");
    }
}

