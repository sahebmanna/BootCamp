/*2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)
*/
#include<iostream>
using namespace std;
class Time{
    int h,m,s;
    public:
        void setTime(int x,int y,int z){
           h=x;m=y;s=z;
        }
        void showTime(){
            cout<<endl<<"Hour="<<h<<" and min="<<m<<" and  Second="<<s;
        }
        Time Add(Time c){
            Time temp;
            temp.h=h+c.h;
            temp.m=m+c.m;
            temp.s=s+c.s;
            if(temp.m>60){
               temp.h=temp.h+1;
               temp.m=temp.m-60;
            }
            if(temp.s>60){
                temp.m=temp.m+1;
                temp.s=temp.s-60;
            }

            return temp;
        }



};
int main(){
    Time c1,c2,c3;
    c1.setTime(5,34,56);
    c2.setTime(6,51,40);
    c3.setTime(6,51,40);
    c3=c2.Add(c1);
    c1.showTime();
    c2.showTime();
    c3.showTime();


    cout<<endl;
    return 0;
}
