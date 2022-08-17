#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float a,b ,c,d,r1,r2;
    printf("Enter value of a,b,c:-->");
    scanf("%f %f %f ",&a,&b,&c);
    d=(4*a*c);
    switch(d>0){
        case 0:
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            printf("The root is real %f and %f",r1,r2);
            break;
        case 1:switch(d==0){
            case 1:
                   r1=r2=-b/(2*a);
                   printf(" The roots are real or equal%f =%f",r1,r2);
                   break;

            case 0:
                   printf("The root is  imaginary");
                   break;
        }
    }
    return 0;
}
