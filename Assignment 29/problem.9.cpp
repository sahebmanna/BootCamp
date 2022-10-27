/*9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.
Example
int main()
{
 int x = 50;
Dollar d;
d = x;
d.display();
 return 0;
}
*/
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
        cout<<"x="<<x<<endl;
    }
    operator int(){
        return x;
    }
};
int main()
{
 int x = 50;
Dollar d;
d = x;
d.display();
 return 0;
}
