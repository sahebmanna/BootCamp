//Overload the operator unary minus (-) to negate the numbers.
#include<iostream>
using namespace std;
class Numbers
{
    int x,y,z;
    public:
        Numbers(){

        }
        Numbers(int a,int b,int c){
            x=a;
            y=b;
            z=c;
        }
        void showData(){
            cout<<"x="<<x<<" "<<"y="<<y<<" "<<"z="<<z;
        }
       Numbers operator-(){
           Numbers temp;
           temp.x=-x;
           temp.y=-y;
           temp.z=-z;
           return temp;

        }

};
int main(){
    Numbers n1(11,6,18),n2;
    n2=-n1;
    n2.showData();
    return 0;
}
