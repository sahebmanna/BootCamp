
//7. Write a C++ Program of Templated class derived from Non-templated class.

#include<iostream>
using namespace std;
template<class t>
class student
{
    public:
        int  x;
        int  y;

        student(){
            x=0,y=0;//** Default constructor */
        };
        int multi(){
            return (x*y);
        }
        //virtual ~student(); //** Default destructor */


};
int main(){
    student <int>s;
    s.x=5;
    s.y=10;
    cout<<" value of x * y is :-->"<<s.multi();
    return 0;
}
