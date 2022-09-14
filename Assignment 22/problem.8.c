#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;

    p=(int*)malloc(sizeof(int));

    *p=10;
    printf("before free %d\n",*p);
    free(p);
    printf("After free %d",*p);
    return 0;
}
