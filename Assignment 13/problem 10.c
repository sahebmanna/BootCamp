//10. Write a program in C to calculate the power of any number using recursion
#include<stdio.h>
int power(int a,int b){
    int x=0;
    if(b==0)
        return 1;
    x=a*power(a,b-1);
    return x;
}
void main(){
    int x,y;
    printf("Enter the value of x:-->");
    scanf("%d",&x);
    printf("Enter the power of x:-->");
    scanf("%d",&y);
    int z=power(x,y);
    printf("%d ",z);

}

