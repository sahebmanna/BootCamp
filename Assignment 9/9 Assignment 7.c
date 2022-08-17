#include<stdio.h>
int main(){
    float x,current_bill=0,total=0;
    scanf("%f",&x);

    switch(x<=50){
    case 1:
        {
            current_bill=x*0.50;
            break;
        }
    case 0:
        switch(x<=150){
        case 1:{
                current_bill=25+(x-50)*.75;
                break;
               }
        case 0:
                    switch(x<=250)
                    {
                    case 1:
                          {
                           current_bill=100+(x-150)*1.2;
                            break;
                          }
                    case 0:
                        {
                           current_bill=220+(x-250)*1.5;
                           break;
                        }
                    }break;
       }break;
    }
    total=current_bill+(current_bill*.20);
    printf("Current bill include all taxes %f",total);

    return 0;
  }


