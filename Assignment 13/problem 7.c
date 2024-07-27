//7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int HCF(int a,int b){

    if(a==b){
        return a;
    }
    if(a%b==0){
        return(b);
    }
    if(b%a==0){
        return a;
    }
    if(a>b)
    return(HCF(a%b,b));
    else
    return(HCF(a,b%a));
}

int main(){
    int x,y;
    printf("Enter the value of x :-->");
    scanf("%d",&x);
    printf("Enter the value of y :-->");
    scanf("%d",&y);
    int z=HCF(x,y);
    printf("Highest common factor of %d and %d is=%d",x,y,z);
    return 0;
}
