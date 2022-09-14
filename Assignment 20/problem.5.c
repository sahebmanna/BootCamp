#include<stdio.h>
void max_num(int *p,int size);
int main(){
    int arr[]={5,4,6,2,11};

    max_num(arr,5);
}
void max_num(int *p,int size){

        int i,temp=0;
        for(i=0;i<size-1;i++){
            if(*(p+i)>*(p+i+1)){
                    if(temp<*(p+i))
                        temp=*(p+i);
            }
            else{
                if(temp<*(p+i+1)){
                    temp=*(p+i+1);
                }
            }
        }
        printf("The maximum number is:-->");
        printf("%d",temp);
}
