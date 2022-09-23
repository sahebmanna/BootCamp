/*9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.
*/
#include<iostream>
using namespace std;
class Bill{
    char customername[20],Address[20];
    int unit;
    int Billamount;
    public:
        void get(){
            cout<<"Enter Customer name:-->";
            cin>>customername;
            cout<<"Enter customer Address:-->";
            cin>>Address;
            cout<<"Enter customer consume current unit:-->";
            cin>>unit;

        }
        void BillCalculation(){
            if(unit<100){
                Billamount=unit*1.2;
                cout<<"Customer is:-->"<<customername<<"and his Current bill is:-->"<<Billamount;
            }
            if(unit>=100&&200>=unit){
                Billamount=(100*1.2)+(unit-100)*2;
                cout<<"Customer is:-->"<<customername<<"and his Current bill is:-->"<<Billamount;
            }
            if(unit>=200){
                Billamount=(100*1.2)+(200-100)*2+(unit-200)*3;
                cout<<"Customer is:-->"<<customername<<"and his Current bill is:-->"<<Billamount;
            }

        }
};
int main(){
    Bill b1;
    b1.get();
    b1.BillCalculation();

    cout<<endl;
    return 0;
}
