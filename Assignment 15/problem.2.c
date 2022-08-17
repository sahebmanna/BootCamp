#include<stdio.h>
int Snum(int b[]);
void input(int c[]);
int main(){
    int a[10],s;
    input(a);

    s=Snum(a);
    printf("The smallest number of array is %d",s);


    return 0;

}
int Snum(int b[]){
    int i;
    int  S_num=b[0];
    for(i=1;i<10;i++){
        if(S_num>b[i])
                S_num=b[i];

    }
    return S_num;

}
void input(int c[]){
    for(int i=0;i<=9;i++)
        scanf("%d",&c[i]);
}
