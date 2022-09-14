#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,size,sum=0,i;
    printf("Enter the size of array:-->\n");
    scanf("%d",&size);
    p=(int*)calloc(size,sizeof(int));
    while(p==NULL){
       printf("Memory allocation failed");
       return 0;
    }
    printf("Enter the array elements:-->\n");
    for(i=0;i<size;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<size;i++){
        sum=sum+*(p+i);
    }
    printf("sum of all elements are %d",sum/size);
    free(p);
    return 0;
}
