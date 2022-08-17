#include<stdio.h>
void Reversenumber(int );
int main(){
    int x;
    scanf("%d",&x);
    Reversenumber(x);
    return 0;

}
void Reversenumber(int n){
        if(n==0)
          return 0;

        printf("%d",n%10);
        Reversenumber(n/10);


}


