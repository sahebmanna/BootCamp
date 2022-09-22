//4. Define a class Counter and Write a program to Show Counter using Constructor.

#include<iostream>
using namespace std;
class Counter{
    int count;

    public:
        Counter(){
            count=0;
        }
        int getcount(){
            return count;
        }
        void inc_count(){
            count++;
        }
};
int main(){
    Counter c1;
    cout<<"Before calling counter function, count =";
    cout<<c1.getcount();
    c1.inc_count();
    cout<<endl<<"After calling counter function ,count =";
    cout<<c1.getcount();
    cout<<endl;
    return 0;
}
