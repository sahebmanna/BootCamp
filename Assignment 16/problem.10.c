#include<stdio.h>
int main(){
    int a[10][10];
    int i,j,count=0,max=0,index=-1;
    printf("Enter a matrices :-->\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]==1)
                count++;
        }
        if(count>max)
        {
            max=count;
            index=i;
        }
    }
    printf("%d",count);


    return 0;
}
