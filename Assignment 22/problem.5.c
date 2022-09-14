#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,size,sum=0,i;
    printf("Enter the number of array elements:-->\n");
    scanf("%d",&size);
    p=(int*)malloc(size*sizeof(int));

    printf("Enter the array elements:-->\n");
    for(i=0;i<size;i++){
        printf("%d no elements is :-->",i+1);
        scanf("%d",p+i);
    }
    for(i=0;i<size;i++){
        sum=sum+*(p+i);
    }
    printf("sum of all elements are %d",sum);
    free(p);
    return 0;
}
