/*8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.
*/
#include<iostream>
using namespace std;
class Bank{

    float principal,rateofinterest,time,si,Amount;
    public:
        Bank(int x1,int x2,int x3){
            principal=x1;
            rateofinterest=x2;
            time=x3;
        }
        int Simpleinterest(){
            si=principal*rateofinterest*time/100;
            return si;
        }
};
int main(){
    Bank b1(40000,6,3);
    cout<<"Simple interest is ="<<b1.Simpleinterest();
    cout<<endl;
    return 0;
}
