
#include<stdio.h>
int main(){
    int x;
    printf("Enter Your own choice month :-->");
    scanf("%d",&x);

    switch(x)
    {
        case 1 :
        printf("Month %d has 31 days",x);
        break;
        case 2 :
        printf("Month %d has 29 days",x);
        break;
        case 3 :
        printf("Month %d has 31 days",x);
        break;
        case 4 :
        printf("Month %d has 30 days",x);
        break;
        case 5 :
        printf("Month %d has 31 days",x);
        break;
        case 6 :
        printf("Month %d has 30 days",x);
        break;
        case 7 :
        printf("Month %d has 31 days",x);
        break;
        case 8 :
        printf("Month %d has 31 days",x);
        break;
        case 9 :
        printf("Month %d has 30 days",x);
        break;
        case 10 :
        printf("Month %d has 31 days",x);
        break;
        case 11 :
        printf("Month %d has 30 days",x);
        break;
        case 12 :
        printf("Month %d has 31 days",x);
        break;

    }
    return 0;
}
