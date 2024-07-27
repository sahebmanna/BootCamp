//5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sumof_odd(int a){
    int x;
    if(a==1){
       return 1;
    }
    x=(a%10)+sumof_odd(a/10);
    return x;

}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a=sumof_odd(n);
    printf("The sum of N natural number is =%d",a);
return 0;
}
