#include<stdio.h>
int main(){
    int day,month,year;
    printf("Enter date in DD/MM/YYYY :-->\n ");
    scanf("%d/%d/%d",&day , &month, &year);

    printf("day-%d,month-%d,year-%d",day,month,year);
    return 0;
}
