#include<stdio.h>
int main(){
    char str[]={'s','a','h','e','b','m','a','n','n','a'};
     int j,count;
     char a,e,i,o,u;
     count=0;
    for(j=0;str[j];j++){

        if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
            count=count+1;
    }
    printf("%d",count);

    return 0;
}
