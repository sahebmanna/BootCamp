#include<stdio.h>
void rev_array(int *p,int size);
int main(){
    int arr[]={4,6,8,11,23};
    rev_array(arr,5);
}
void rev_array(int *p,int size){
    int i,z=0;
    for(i=size-1;i>=0;i--){
       z=p[i];
       printf("%d ",z);
    }

}

