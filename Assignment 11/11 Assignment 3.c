#include<stdio.h>
int PRIME_OR_NOT(int );
int main(){
        int n,s;
        scanf("%d",&n);
        s=PRIME_OR_NOT(n);
        if(s==0)
            printf("The number is Prime");
        else
            printf("The number is NON_Prime");
        return 0;
}



int PRIME_OR_NOT(int x){
        if(x%2==0)
                return 1;
        else
                return 0;
}
