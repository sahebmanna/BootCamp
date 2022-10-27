/*4. Create Product class and convert Product type to Item type using casting operator
int main()
{
 Item i1;
 Product p1;
 p1.setData(3,4);
 i1=p1;
 return 0;
}*/
#include<iostream>
using namespace std;
class Item{
    int x11,x22;
public:
    //Item(){}
    Item(int i,int j){
      x11=i;x22=j;
    }
    void showData(){
        cout<<"x11="<<x11<<" "<<"x22="<<x22<<endl;
    }

};
class Product{
    int x1,x2;
public:
    Product(int a,int b){
       x1=a;x2=b;
    }

    operator Item(){
        Item i(x1,x2);
        return i;
    }
    void showData2(){
        cout<<"x1="<<x1<<" "<<"x2="<<x2<<endl;}
};
int main()
{ Product p1(3,4);
     Item  i1 = p1;
     p1.showData2();
     i1.showData();
     return 0;
}
