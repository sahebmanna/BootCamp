//3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int sumof_odd(int a){
    int x;
    if(a==1){
       return 2;
    }
    x=(2*a)+sumof_odd(a-1);
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
