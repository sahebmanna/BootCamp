#include<iostream>
using namespace std;
class Complex{
    private:
        int Hr;
        int Min;
        int sec;
    public:
        void input(int a,int b,int c){
            Hr=a;
            Min=b;
            sec=c;
        }
        void display(){
            cout<<Hr<<"Hr"<<" "<<Min<<"Min"<<" "<<sec<<"sec"<<endl;

        }


};
int main(){
    Complex c1;
    c1.input(12,15,34);

    c1.display();


    return 0;
}
