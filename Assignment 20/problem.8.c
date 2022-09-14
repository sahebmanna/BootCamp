#include<stdio.h>
void sum_array(int *p,int size);
int main(){
    int arr[]={4,6,8,11,23};
    sum_array(arr,5);
}
void sum_array(int *p,int size){
    int i,sum=0;
    for(i=0;i<size;i++){
        sum=sum+p[i];
    }
    printf("The sum of the array is %d",sum);
}
