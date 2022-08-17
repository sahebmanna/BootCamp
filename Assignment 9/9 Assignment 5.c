#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);

    switch(x){
        case 1:
            printf("GOOD");

            break;
        case 2:
            printf("Better");

            break;
        case 3:
            printf("Best");

            break;
        default:
            printf("invalid ");


    }
    return 0;
}
