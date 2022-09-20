//10. Write a program which takes the cost price and selling price of a product from the
//user. Now calculate and print profit or loss percentage.
#include <stdio.h>

int main() {
    int cp,sp;
    printf("enter cp and sp:");
    scanf("%d %d",&cp,&sp);

    if(cp<sp){

        printf("profit is %d",((sp*100)/cp)-100);
    }
    else if(sp<cp){

        printf("loss is %d",-(((100*sp)/cp)-100));
    }
    return 0;
}
