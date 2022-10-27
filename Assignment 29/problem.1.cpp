/*1.Write a C++ program to convert Primitive type to Complex type.
 Example -
 int main()
{
 Complex c1;
 Int x=5;
 c1=x;
 return 0;
}
*/
#include<iostream>
using namespace std;
class complex{
    int x1;
public:
    complex(){
    }
    complex(int a){
        x1=a;
    }
    void showData(){
        cout<<"value of x1 is="<<x1<<endl;
    }

};
int main()
{
 complex c1;
 int x=5;
 c1=x;
 c1.showData();
 return 0;
}
