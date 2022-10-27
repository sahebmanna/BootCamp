/*10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.
Example
int main()
{
 Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
 return 0;
}*/
#include<iostream>
using namespace std;
class Dollar{
    int x;
public:
    Dollar(){}
    Dollar(int a){
       x=a;
    }
    int geter(){
        return x;
    }
    void display(){
        cout<<"dollar="<<x<<endl;
    }
    operator int(){
        return x;
    }

};
class Rupee{
    int y;
public:
    Rupee(int x){
        y=x;
    }
    void display(){
        cout<<"rupee="<<y<<endl;
    }
   operator Dollar(){
       return y/100;
   }
   Rupee(Dollar d){
       y=d.geter()*100;
   }
};
int main()
{
    Rupee r = 100;
    Dollar d = r;
    r.display(); // Rupee to Dollar conversion
    d.display();

    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();
     return 0;
}
