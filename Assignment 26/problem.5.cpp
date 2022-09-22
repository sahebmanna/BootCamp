//5. Define a class Date and write a program to Display Dateand initialise date object
//using Constructors.

#include<iostream>
using namespace std;
class Date{
    int day,month,year;

    public:
        Date(int x,int y,int z){
            day=x;
            month=y;
            year=z;
        }
        void showdate(){
            cout<<"Day="<<day<<" "<<"month="<<month<<" "<<"year="<<year;

        }
       /* Date manipulation(){
            Date temp;
            if(temp.day>30){
                month++;
            }
            if(temp.month>12){
                year++;
            }
            return temp;
        }
        */


};
int main(){
    Date d1(23,11,2022);
    //d1.manipulation();
    d1.showdate();
    cout<<endl;
    return 0;
}
