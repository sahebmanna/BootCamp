#include<stdio.h>
void swap(int *,int *);
int main(){
    int x,y;
    printf("Enter the value of x and y:-->");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("The value of x = %d and y = %d ",x,y);
    return 0;
}
void swap(int *p,int *q){
        int t;
        t=*p;
        *p=*q;
        *q=t;
}
