#include<stdio.h>
int main(){
    int x,y;
    printf("Enter  value of x:");
    scanf("%d",&x);
    switch(x%2==0)
    {
        case 1:y=x+1;
            printf("\n%d next odd number is%d",x,y);
            break;
        case 0:
            printf("%d It is not a even number ",x);

    }
    return 0;
}
