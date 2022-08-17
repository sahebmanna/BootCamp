#include<stdio.h>
float area(float ,float);
int main(){
    float r,s;
    float pie=3.14;
    printf("Enter Radious :--> ");
    scanf("%f",&r);

    s=area(r,pie);
    printf("print tha area of acircle is %f",s);

    return 0;

}
float area(float r,float pie){
    float a;
    a=pie*r*r;
    return a;
}
