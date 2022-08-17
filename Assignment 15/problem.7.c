#include<stdio.h>
void count_duplicate_number(int b[],int );
void input(int c[],int );
int main(){
    int a[6];

    input(a,6);
    count_duplicate_number(a,6);

    return 0;
}
void count_duplicate_number(int b[],int n){

     int count=0;
     for(int i=0;i<=n-2;i++)
     {
        for(int j=i+1;j<=n-1;j++){
            if(b[i]==b[j])
            count++;
        }
     }
     printf("%d",count);

}
void input(int c[],int n){
    for(int i=0;i<=n-1;i++)
        scanf("%d",&c[i]);
}
