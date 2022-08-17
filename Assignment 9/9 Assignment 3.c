#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    printf("Enter Your own choice day :-->");
    scanf("%d",&x);

    switch(x)
    {
        case 1 :
        printf("day %d is Sunday\n",x);
        printf("HELLO Sir G");
        break;
        case 2 :
        printf("day %d is Monday\n",x);
        printf("HELLO INEURON");
        break;
        case 3 :
        printf("day %d is Tuesday\n",x);
        printf("HELLO Friends");
        break;
        case 4 :
        printf("day %d is Wednesday\n",x);
        printf("HELLO Sujan");
        break;
        case 5 :
        printf("day %d is Thursday\n",x);
        printf("WELcome");
        break;
        case 6 :
        printf("day %d is Friday\n",x);
        printf("Chalia suru karte ha");
        break;
        case 7 :
        printf("day %d is Saturday\n",x);
        printf("A SUNNY day");
        break;

        default:
            printf("Invalid choice");

  }
}
