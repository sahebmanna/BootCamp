#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
void creatMatrics(arr[][4]);
void structure();
char arr[]={'1','2','3','4','5','6','7','8','9'};
void structure(){

    printf("\t========TIC-TAC-TOE========\n\n");
    printf("\t\t ____ ____ ____\n");
    printf("\t\t|    |    |    |\n");
    printf("\t\t|  %c |  %c |  %c |\n",arr[0],arr[1],arr[2]);
    printf("\t\t|____|____|____|\n");

    printf("\t\t|    |    |    |\n");
    printf("\t\t|  %c |  %c |  %c |\n",arr[3],arr[4],arr[5]);
    printf("\t\t|____|____|____|\n");

    printf("\t\t|    |    |    |\n");
    printf("\t\t|  %c |  %c |  %c |\n",arr[6],arr[7],arr[8]);
    printf("\t\t|____|____|____|\n");

}
int main(){
    int arr[4][4];
    char name[20];
    for(int m=0;m<3;m++){
        printf("\n");
    }
    printf("player name:--");
    scanf("%c",name);
    system("cls");
    while(1){
        creatMatrics(arr);

    }
    structure();
    return 0;
}
void creatMatrics(arr[][4]){
    int n;
    int num[n],i,j;
    for(i=0;i<15;i++){
        num[i]=i+1;
    }
    srand(time(Null));
    int lastindex=n-1,index;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(lastindex>=0){
                index=rand()%(lastindex+1);
                arr[i][j]=num[index];
                num[index]=num[lastindex--];
            }
        }
     arr[i-1][j-1]=0;
    }
}
