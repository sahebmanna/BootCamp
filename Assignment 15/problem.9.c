#include<stdio.h>
void Merge_array(int b[],int c[],int );
void input_array_1(int b[],int );
void input_array_2(int c[],int );
int main(){
    int a[5],i;

    input_array_1(a,5);
    printf("\n");
    input_array_2(a,5);
    printf("The Merge array  element is :-->");
    Merge_array(a,a,2*5);


    return 0;
}
void Merge_array(int b[],int c[],int n){
    int i=0,j=0,k=0,d[10];
    for(k=0;k<10;k++){
        if(i>=5){
            while(k<10){
                d[k]=b[j];
                j++;k++;
                if(k==10)
                    break;
            }
        }
        else if(j>=5){
            while(k<10){
                d[k]=b[i];
                i++;k++;
                if(k==10)
                    break;
            }
        }
        else
        {
            if(b[i]<c[j]){
            d[k]=b[i];
            i++;
            }
            else{
                d[k]=c[j];
                j++;
            }

        }
    }
    for(k=0;k<=9;k++){
        printf(" %d ",d[k]);
    }

    }


void input_array_1(int b[],int n){
    for(int i=0;i<=n-1;i++){
        printf("Enter b[%d]",i);
        scanf("%d",&b[i]);

     }
}
void input_array_2(int c[],int n){
    for(int i=0;i<=n-1;i++){
        printf("Enter c[%d]",i);
        scanf("%d",&c[i]);

     }
}
