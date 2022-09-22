//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include<iostream>
using namespace std;
class Cube{
    int l;
    int volume;
    public:
        Cube(int x){
            l=x;
        }
        int VolumeCalculation(){
            int temp=1;
            temp=l*l*l;
            return temp;
        }


};
int main(){
    Cube c1(5);
    cout<<"The volume of Cube is"<< c1.VolumeCalculation();


    cout<<endl;
    return 0;
}
