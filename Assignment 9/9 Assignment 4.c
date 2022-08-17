#include<stdio.h>
 int main(){

        int x,m,n,y;


while(1){
        printf("\n1: to check Isosceles Triangle,\n2: to check Equilateral triangle,\n3:to check Right Angled triangle,\n4:exit\n");
        printf("Enter Your own choice  :-->");
        scanf("%d",&x);
    switch(x)
    {
        case 1 :

            scanf("%d %d %d",&m,&n,&y);
            if((m==n&&m!=y)||(m==y&&m!=n)||(y==n&&y!=m))
                    printf("The triangle is Isosceles triangle");
            else
                    printf("It is not an isosceles triangle");
            break;
        case 2 :

            scanf("%d %d %d",&m,&n,&y);
            if(m==n&&n==y)
                    printf("The triangle is equilateral triangle");
            else
                    printf("It is not an Equilateral triangle");
            break;
        case 3 :

            scanf("%d %d %d",&m,&n,&y);
            if(m!=n&&n!=y)
                    printf("The triangle is right angled triangle ");
            else
                    printf("The triangle is not an right angled triangle");
            break;
        case 4 :

            exit(0);
        default:
            printf("Invalid choice");
     }

   }
 }
