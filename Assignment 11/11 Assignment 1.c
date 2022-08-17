#include<stdio.h>
int LCM(int,int);
int main(){
    int x,y,s;
    scanf("%d %d",&x,&y);
    s=LCM(x,y);
    printf("The LCM is%d",s);
    return 0;

}
int LCM(int m,int n){
    int i;
    for(i=1;i<=m*n;i++){
        if(i%m==0&&i%n==0)
            break;
    }
    return i;
}
