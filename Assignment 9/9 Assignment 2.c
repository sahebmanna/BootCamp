
#include<stdio.h>
int main(){
    int x,m,n;


    while(1){
            printf("\n1:addition,\n2:Subtraction,\n3:Multiplication,\n4:Division,\n5:Exit\n");
            printf("Enter Your own choice  :-->");
            scanf("%d",&x);
    switch(x)
    {
        case 1 :

            scanf("%d %d",&m,&n);
            printf("addition of %d and %d is %d",m,n,(m+n));
            break;
        case 2 :

            scanf("%d %d",&m,&n);
            printf("Subtraction of %d and %d is %d",m,n,(m-n));
            break;
        case 3 :

            scanf("%d %d",&m,&n);
            printf("Multiplication of %d and %d is %d",m,n,(m*n));
            break;
        case 4 :

            scanf("%d %d",&m,&n);
            printf("addition of %d and %d is %d",m,n,(m/n));
            break;
        case 5 :
             break;

    }
  }
    return 0;
}
