#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);

    switch(x%100==0){
        case 1:
            switch(x%400==0){
            case 1: printf("It is an  century Leap year");
            break;
            case 0: printf("It is an non century leap year");
         }
         break;
        case 0:
            switch(x%4==0){
            case 1:printf("IT is an leap year");
            break;
            case 0:printf("IT is an non leap year");
         }
    return 0;
  }
}
