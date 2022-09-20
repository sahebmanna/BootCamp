//17. Write a program which takes the length of the sides of a triangle as an input. Display
//whether the triangle is valid or not.
#include<stdio.h>
int main(){
        int x,y,z;
        printf("Enter value x,y,z :");
        scanf("%d %d %d",&x,&y,&z);

        if((x+y>=z )||(y+z>=x))
                printf("The triangle valid");
        else
                printf("The triangle  is not valid");
        return 0;
}
