#include<stdio.h>
float simple_interest(float ,float,float);
int main(){
    float p,r,t,s;
    printf("Enter p,r,t :--> ");
    scanf("%f%f%f",&p,&r,&t);

    s=simple_interest(p,r,t);
    printf("The simple interest is %f",s);

    return 0;

}
float simple_interest(float p,float r,float t){
    float i;
    i=p*r*t;;
    return i;
}
