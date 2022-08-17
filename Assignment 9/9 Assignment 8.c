#include<stdio.h>
int main(){
    int x,y;
    scanf("%d",&x);

    switch(x>=0)
    {
        case 1:y=x-2*x;
            printf("%d",y);
            break;

        case 0:y=x*(-1);
            printf("%d",y);
    }
    return 0;
}
