#include<iostream>
using namespace std;
class Circle{
    private:
        int r;
        int A;

    public:
        void setval(int x){
            r=x;
        }
        int getval(){
            return r;
        }
        int area(){
            A=3.14*r*r;
            return A;
        }


};
int main(){
    Circle c;
    c.setval(6);
    cout<<"Area of Circle whose radious ="<<c.getval()<<"and Area is ="<<c.area()<<endl;
     return 0;
}
