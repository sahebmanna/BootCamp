#include <stdio.h>

int main() {
   int sub1,sub2,sub3,sub4,sub5;
   printf("Enter  number of sub1,sub2,sub3,sub4,sub5 :");
   scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);

   if(sub1>=33&&sub2>=33&&sub3>=33&&sub4>=33&&sub5>=33)
        printf("pass");
   else
        printf("fail");
   return 0;
}
