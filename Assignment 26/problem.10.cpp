/*10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the resul.
*/
#include<iostream>
#include<string>
using namespace std;
class StaticCount{

  public:

    void Count(){
        static int x=0;
        x++;
        cout<<x<<endl;
    }

};
int main(){
   StaticCount s1;
   s1.Count();
   s1.Count();
   s1.Count();

   s1.Count();
    cout<<endl;
    return 0;
}
