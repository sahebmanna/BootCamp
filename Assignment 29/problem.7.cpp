/*7. Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
 Time t1(2,30);
 t1.display();
 Minute m1;
 m1.display();
 m1=t1 // Fetch minute from time
 t1.display();
 m1.display();
 return 0;
}*/
#include<iostream>
using namespace std;
class Time{
    int hr,min;
public:
    Time(){}
    Time(int x,int y){
        hr=x;
        min=y;
    }
    int geter(){
        return hr;
    }
    int geter2(){
        return min;
    }
    void display(){
        cout<<"hours="<<hr<<" "<<"Miniouts="<<min<<endl;
    }

};
class Minute{
    int x,y;
public:
    Minute(){x=0;y=0;}
    Minute(Time ob){
        x=ob.geter();y=ob.geter2();
    }
    void display1(){
        cout<<"x="<<x<<" "<<"y="<<y<<endl;
    }
};
int main()
{
 Time t1(2,30);
 t1.display();
 Minute m1;
 m1.display1();
 m1=t1;
 t1.display(); // Fetch minute from time
 m1.display1();
 return 0;
}

