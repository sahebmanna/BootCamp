#include<stdio.h>
#include<conio.h>
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

    structure();
    return 0;
}
