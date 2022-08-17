#include<stdio.h>
void Binary(int );
int main(){
    int x;
    scanf("%d",&x);
    Binary(x);
    return 0;

}
void Binary(int n){
        if(n==0)
          return 0;
        Binary(n/2);
        printf(" %d",n%2);


}


