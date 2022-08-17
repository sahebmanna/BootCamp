#include<stdio.h>
int Gnum(int b[]);
void input(int c[]);
int main(){
    int a[10],s;
    input(a);

    s=Gnum(a);
    printf("The greatest number of array is %d",s);


    return 0;

}
int Gnum(int b[]){
    int i;
    int  G_num=b[0];
    for(i=1;i<10;i++){
        if(G_num<b[i])
                G_num=b[i];

    }
    return G_num;

}
void input(int c[]){
    for(int i=0;i<=9;i++)
        scanf("%d",&c[i]);
}
