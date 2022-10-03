/*Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
*/
#include<iostream>
#include<stdio.h>
using namespace std;
class fraction
{
    long nume;
    long deno;
    public:
         fraction(long n=0,long d=0){
             nume=n;
             deno=d;
         }
         friend void operator>>(istream &input,fraction &f){
             cout<<endl<<"Numerator :";
             input>>f.nume;
             cout<<endl<<"denominator :";
             input>>f.deno;
         }
        friend void operator<<(ostream &out,fraction &f){
             out<<f.nume<<"/"<<f.deno;
         }
        fraction operator++(){//post increment

             ++nume;
             ++deno;
             return (*this);
         }
        fraction operator++(int s){//pree Increment
             fraction temp=*this;
             this->nume++;
             this->deno++;
             return temp;
         }


};
int main(){
    fraction f1,f2;
    cout<<endl<<" f1 :";
    cout<<f1;
    cout<<endl<<" f2 :";
    cout<<f2;
    cout<<endl;
    cout<<endl<<"Enter first fraction values :";
    cin>>f1;
    cout<<endl<<"\n f1++ :";
    f1++;
    cout<<f1;
    cout<<endl<<"\n ++f1 :";
    ++f1;
    cout<<f1;
    cout<<endl;
    cout<<endl<<"Enter second fraction values :";

    cin>>f2;
    f2=++f1;
    cout<<endl<<"\n f2 = ++f1 :";
    cout<<"\n f1 :";
    cout<<f1;
    cout<<"\n f2 :";
    cout<<f2;
    f2=f1++;
    cout<<endl<<"\n f2 = f1++ :";
    cout<<"\n f1 :";
    cout<<f1;
    cout<<"\n f2 :";
    cout<<f2;
    return 0;
}
