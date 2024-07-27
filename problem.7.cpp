//7. Create an Integer class and overload logical not operator for that class.
#include<iostream>
#include<stdio.h>
using namespace std;
class Integer
{   int i;
    public:
        Complex(int x){
            i= x;
        }
        void show(){
            cout<<i;
        }

        void operator!(void){

         i=-i;

        }

};
int main(){
    Integer I(12);
    !I;
    I.show();
    return 0;
}
