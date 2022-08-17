#include<stdio.h>
void Sorting(int b[]);
void input(int c[]);
int main(){
    int a[10];
    input(a);

    Sorting(a);
    for(int i=0;i<=9;i++){
    printf(" %d ",a[i]);
    }


    return 0;

}
void Sorting(int b[]){
    int i,j,temp=0;
     for(i=0;i<=9;i++){
      for(j=i+1;j<=9;j++){

        if(b[i]<b[j])
            temp=b[i];

        else
        {
            temp=b[j];
            b[j]=b[i];
            b[i]=temp;
        }

     }

    }


}
void input(int c[]){
    for(int i=0;i<=9;i++)
        scanf("%d",&c[i]);
}
