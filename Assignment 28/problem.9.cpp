9. Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type.#include<iostream>
//#include<referance>
using namespace std;
class coordinate
{   int x,y,z;

    public:
        coordinate(){
            x=0;
            y=0;
            z=0;
        }

        Complex(int a,int b,int c){
            x=a;
            y=b;
            z=c;
        }
        void ShowFun(){
            cout<<"x="<<x<<" "<<"y="<<y<<" "<<"z="<<z<<endl;
        }
        void operator,(coordinate &c){


        this->x=c.z;
        this->y=c.y;
        this->z=c.x;


        }

};
int main(){
    coordinate c1(1,2,3),c2(2,3,4);
    coordinate c3 = (c1,c2);
    c3.ShowFun();
    return 0;
}

