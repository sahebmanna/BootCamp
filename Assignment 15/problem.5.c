#include<stdio.h>
int Adjacent_duplicatevalue(int b[],int );
void input(int c[],int );
int main(){
    int a[5],s;

    input(a,5);
    s=Adjacent_duplicatevalue(a,5);
    if(s==)
    printf("The Adjacent Duplicate value is %d",s);

    return 0;
}
int Adjacent_duplicatevalue(int b[],int n){
    int D;
     for(int i=0;i<n-2;i++){
        if(b[i]==b[i+1]){
            D=b[i+1];
        }
     }
        return D;
}
void input(int c[],int n){
    for(int i=0;i<=n-1;i++)
        scanf("%d",&c[i]);
}
