//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
//convert it into USD.
#include<stdio.h>
int main(){
    int INR;
    int USD;
    printf("Enter amount in indian currency:");
    scanf("%d",&INR);
    printf("Indian ruppy %d convert in to USD%d",INR,INR/76);
    return 0;
}
