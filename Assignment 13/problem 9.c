//9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int digits_count(int a){
    static int x=0;
    if(a<10)
        return (++x);
    else{
        ++x;
        a=a/10;

    }
    digits_count(a);


    return x;
}
void main(){
    int x;
    printf("Enter the value of x:-->");
    scanf("%d",&x);
    int y=digits_count(x);
    printf("%d ",y);

}
