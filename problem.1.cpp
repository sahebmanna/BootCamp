/*1. Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator
*/
#include<iostream>
using namespace std;
class Complex{
    int Hour,Min,sec;
    public:

        Complex(){
           Hour=0;
           Min=0;
           sec=0;
        }

        friend int operator>>(istream &os ,Complex &t );
        friend void operator<<(ostream &cout ,Complex &t);

};
int operator>>(istream &os ,Complex &t)
       {
            cout<<endl<<"Enter hour:";
            os>>t.Hour;
            cout<<"Enter Min:";
            os>>t.Min;
            cout<<"Enter sec:";
            os>>t.sec;
            if(t.sec>=60){
                t.Min++;
                t.sec=t.sec-60;
            }
            if(t.Min>=60){
                t.Hour++;
                t.Min=t.Min-60;
            }
            if(t.Hour>24)
                return 1;
            else
                return 0;

        }
void operator<<(ostream &cout ,Complex &t){
    cout<<"Hour:-->"<<t.Hour<<endl;
    cout<<"Min:-->"<<t.Min<<endl;
    cout<<"sec:-->"<<t.sec<<endl;
}

int main(){
   Complex c1,c2;
    cin>>c1;
    cout<<c1;
    cout<<endl;
    return 0;
}
