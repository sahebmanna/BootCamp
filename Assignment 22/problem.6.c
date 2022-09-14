#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,size,sum=0,i,max;
    printf("Enter the number of array elements:-->\n");
    scanf("%d",&size);
    p=(int*)malloc(size*sizeof(int));

    printf("Enter the array elements:-->\n");
    for(i=0;i<size;i++){
        printf("%d no elements is :-->",i+1);
        scanf("%d",p+i);
    }
    max=p[0];
    for(i=1;i<size;i++){

       if(p[0]<p[i]){
         max=p[i];
       }

    }
    printf("The maximum value of array is %d",max);
    free(p);
    return 0;
}
