/*2. Write a C++ program to convert Complex type to Primitive type.
 Example -
 int main()
{
 Complex c1;
 c1.setData(3,4);
 int x;
 x=c1;
 return 0;
}
*/
#include<iostream>
using namespace std;
class complex{
    int x1,x2;
public:

    void setData(int a,int b){
        x1=a;x2=b;
    }
    void showData(){
        cout<<"x1="<<x1<<" "<<"x2="<<x2<<endl;
    }
    operator int(){
        return x1;
    }

};
int main()
{
 complex c1;
 c1.setData(3,4);
 int x;
 x=c1;
 cout<<x;
 return 0;
}
