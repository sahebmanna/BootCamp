#include<stdio.h>
int main(){
    int A,B,C;
    printf("Enter value A, B, C :");
    scanf("%d %d %d",&A,&B,&C);

    if(A>B&&A>C)
        printf("THE GREATER NUMBER IS %d",A);

    else if(B>C)
        printf("THE GREATER NUMBER IS %d",B);
    else
        printf("The greater number is %d",C);
    return 0;
}
