//8. Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main(){
    int year;
    printf("Enter year :");
    scanf("%d",&year);

    if(year%4==0)
        printf("The year  %d is leap year",year);

    else
        printf("The year %d is non leap year ",year);
    return 0;
}
