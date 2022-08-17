#include<stdio.h>
int main(){
   int x;
   printf("Enter value of x :");
   scanf("%d",&x);

   if(x>99)
        printf("The number %d is Three digit",x);

    else
        printf("The number %d is not three digit",x);
    return 0;
}
