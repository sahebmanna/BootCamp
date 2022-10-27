/*6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
int ) to Time class.
Example-
int main()
{
 int duration;
 cout<<”Enter time duration in minutes”;
 cin>>duration;
 Time t1 = duration;
 t1.display();
 return 0;
}*/
#include<iostream>
using namespace std;

class Time{
    int hr,min,sec;
public:
    Time(int x,int y,int z){
        hr=x;
        min=y;
        sec=z;
    }
    Time(int d){
        hr=d/3600;
        d=d%3600;
        min=d/60;
        d=d%60;
        sec=d;
    }
    void display(){
        cout<<"hours="<<hr<<" "<<"mini-outs="<<min<<" "<<"seconds="<<sec<<endl;
    }

};
int main()
{
 int duration;
 cout<<"Enter time duration in minutes:--->";
 cin>>duration;
 Time t1 = duration;
 t1.display();
 return 0;
}
