/*5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
 Invent1 s1=(4,5);
 Invent2 d1;
 float tv;
 tv=s1;
 d1=s1;
 return 0;
}*/
#include<iostream>
using namespace std;
class Invent2{
    int x1,y2;
public:
    Invent2(){}
    Invent2(int a,int b){
        x1=a;y2=b;
    }
    void showData(){
        cout<<"x1="<<x1<<" "<<"y2="<<y2<<endl;
    }

};
class Invent1{
    int x,y;
public:
    Invent1(){}
    Invent1(int i,int j){
      x=i;y=j;
    }
    void showData(){
        cout<<"x="<<x<<" "<<"y="<<y<<endl;
    }
    operator int(){
        return(x+y);
    }
    operator Invent2(){
        Invent2 i(x,y);
        return i;
    }
};
int main()
{
 Invent1 x(4,5);
 Invent2 y;
 float z;
 z=x;
 y=x;
 cout<<z<<endl;
 y.showData();
 return 0;
}
