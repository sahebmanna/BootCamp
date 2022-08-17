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
