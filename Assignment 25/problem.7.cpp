#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class Greatestnumber{
    private:
        int x;
        int y;
        int z;
    public:
        void Setnum(int a,int b,int c){
            x=a;
            y=b;
            z=c;
        }
        int getnum1(){
            return x;
        }
        int getnum2(){
            return y;
        }
        int getnum3(){
            return z;
        }

        int findmax(){
           if(x>y&&y>z)
                return x;
           else if(x<y&&y>z)
                return y;
           else
                return z;
        }
};
int main(){
    Greatestnumber L;
    L.Setnum(11,77,13);

    cout<<"The three number is"<<" "<<L.getnum1()<<" "<<L.getnum2()<<" "<<L.getnum3()<<" and largest of the three number is "<<L.findmax()<<endl;

    return 0;
}

