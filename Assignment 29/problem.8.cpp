/*8. Create a Rupee class and convert it into int. And Display it.
Example
int main()
{
 Rupee r = 10;
 int x = r;
cout<<x;
 return 0;
}
*/
#include<iostream>
using namespace std;
class Rupee{
    int x;
public:
    Rupee(){}
    Rupee(int a){
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
 Rupee r = 10;
 int x = r;
cout<<x<<endl;
 return 0;
}
