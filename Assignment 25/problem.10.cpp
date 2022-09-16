#include<iostream>
using namespace std;
class Area{
    private:
        int l;
        int r;
        int A;

    public:
        void setval(int x,int y){
            l=x;
            r=y;
        }

        int getval(){
            return r;
        }
        int circlearea(){
            A=3.14*r*r;
            return A;
        }
        int recarea(){
            int rec=0;
            rec=l*r;
            return rec;
        }
        int squer(){
            int ar;
            ar=l*l;
            return ar;
        }


};
int main(){
    Area c;
    c.setval(5,4);

    cout<<"Area of Circle  is ="<<c.circlearea()<<endl;
    cout<<"Area of rectangle  is ="<<c.recarea()<<endl;
    cout<<"Area of square  is ="<<c.squer()<<endl;
     return 0;
}
