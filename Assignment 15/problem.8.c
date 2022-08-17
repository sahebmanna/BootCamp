#include<stdio.h>
void Unique_number(int b[],int );
void input(int c[],int );
int main(){
    int a[6];

    input(a,6);
    Unique_number(a,6);

    return 0;
}
void Unique_number(int b[],int n){

     int d;
     for(int i=0;i<=n-1;i++)
     {
        for(int j=i+1;j<i;j++){
            if(b[i]==b[j]&& i!=j)
                  break;
            if(i==j)
                printf("%d",b[i]);

        }
     }

}
void input(int c[],int n){
    for(int i=0;i<=n-1;i++)
        scanf("%d",&c[i]);
}
