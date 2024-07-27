/*8. Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class.
*/
#include<iostream>
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
