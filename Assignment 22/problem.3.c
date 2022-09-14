#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,size,sum=0,i;
    printf("Enter the number of elements:-->\n");
    scanf("%d",&size);
    p=(int*)malloc(size*sizeof(int));
    //while(p==NULL){
   //     printf("Memory")
    //}
    printf("Enter the  elements:-->\n");
    for(i=0;i<size;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<size;i++){
        sum=sum+*(p+i);
    }
    printf("sum of all elements are %d",sum);
    free(p);
    return 0;
}
