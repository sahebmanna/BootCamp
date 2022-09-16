//WAP to find the area of the circle. Take radius of circle from user as input and print the
//result in below given format.
//Expected output format – “Area of circle is A having the radius R”. Replace A with area
//& R with radius.
#include<stdio.h>
int main(){
    int r,PI=3.14,A;
    printf("enter the value of r:");
    scanf("%d",&r);
    A=PI*r*r;
    printf("the area of a circle is%d",A);
}
