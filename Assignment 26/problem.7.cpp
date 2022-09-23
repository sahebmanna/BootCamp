/*7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.
*/
#include<iostream>
#include<string.h>
using namespace std;
class Box{

    int length,breadth,height, volume;
    public:
        Box(int x,int y,int z){
            length=x;
            breadth=y;
            height=z;
        }
        int VolumeOfBox(){
            volume=length*breadth*height;
            return volume;
        }
};
int main(){
    Box b1(4,6,3);
    cout<<"volume of the box ="<<b1.VolumeOfBox();
    cout<<endl;
    return 0;
}
