/*3. Create a Product class and convert Product type to Item type using constructor
int main()
{
 Item i1;
 Product p1;
 p1.setData(3,4);
 i1=p1;
 return 0;
}
*/
#include<iostream>
using namespace std;
class Product{
    int x1,x2;
public:
    Product(int a,int b){
        x1=a;
        x2=b;
    }
    int getData1(){
        return x1;
    }
    int getData2(){
        return x2;
    }

};
class Item{
    int x11,x22;
public:
    Item(){}
    Item(Product p){
      x11=p.getData1();
      x22=p.getData2();
    }
    void showData(){
        cout<<"value of x11="<<x11<<" "<<"value of x22="<<x22<<endl;
    }
};
int main()
{
 Item i1;
 Product p1(3,4);
// p1.setData(3,4);
 i1=p1;
 i1.showData();
 return 0;
}
