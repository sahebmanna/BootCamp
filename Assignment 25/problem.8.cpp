#include<iostream>
using namespace std;
class Rectangle{
    private:
        int l;
        int b;

    public:
        void setval(int x,int y){
            l=x;
            b=y;
        }
        int getlength(){
            return l;
        }
        int getbreadth(){
            return b;
        }
        int calculatearea(){
            int a;
            a=l*b;
            return a;
        }

};
int main(){
    Rectangle re;
    re.setval(4,6);
    cout<<"A rectangle whose length = "<<re.getlength()<<","<<"breadth = "<<re.getbreadth()<<" "<<"and Area = "<<re.calculatearea()<<endl;
    return 0;
}
