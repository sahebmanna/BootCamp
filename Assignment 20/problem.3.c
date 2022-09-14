#include<stdio.h>
#include<string.h>
void sort_array(int *,int);
int main(){
    int arr[]={3,2,1,4,6,11,12,10,9,10};
    //int i;

    sort_array(arr,10);
    for(int i=0;i<10;i++){
       printf("%d ",arr[i]);
    }
    return 0;

}
void sort_array(int *p,int size){

    int i,j,temp;
    for(i=0;i<size-1;i++){
      for(j=i;j<size;j++){

        if(p[i]>p[j]){
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
        }
      }
    }
}
