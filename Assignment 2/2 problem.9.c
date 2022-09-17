//9. Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>
int main(){
    int x;
    float y;
    char z;
    double A;

    printf("size of int :-->%4d\n",sizeof(x));
    printf("size of float :-->%2d\n",sizeof(y));
    printf("size of char :-->%3d\n",sizeof(z));
    printf("size of double :-->%d",sizeof(A));
}
