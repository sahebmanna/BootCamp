/*4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. == : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.
*/
#include<iostream>
using namespace std;
class Time{
    int Hour,Min,sec;
    public:

        Time(){
           Hour=0;
           Min=0;
           sec=0;
        }

        friend int operator>>(istream &os ,Time &t );
        friend void operator<<(ostream &cout ,Time &t);
        friend int operator==(Time,Time);
};
int operator>>(istream &os ,Time &t)
       {
            cout<<endl<<"Enter hour:";
            os>>t.Hour;
            cout<<"Enter Min:";
            os>>t.Min;
            cout<<"Enter sec:";
            os>>t.sec;
            if(t.sec>=60){
                t.Min++;
                t.sec=t.sec-60;
            }
            if(t.Min>=60){
                t.Hour++;
                t.Min=t.Min-60;
            }
            if(t.Hour>24)
                return 1;
            else
                return 0;

        }
void operator<<(ostream &cout ,Time &t){
    cout<<"Hour:-->"<<t.Hour<<endl;
    cout<<"Min:-->"<<t.Min<<endl;
    cout<<"sec:-->"<<t.sec<<endl;
}
int operator==(Time t,Time t2){
    int tot=t.Hour*3600+t.Min*60+t.sec;
    int tot2=t2.Hour*3600+t2.Min*60+t2.sec;
    if(tot==tot2){
        return 1;
    }
    else
        return 0;

}
int main(){
    Time t1,t2;
    cout<<"-----:Enter first time:-----";
    cout<<endl<<"__________________";
    if(cin>>t1){
        cout<<"Invalid input...!";
        return 0;
    }
    cout<<"First input is:-----"<<endl;
    cout<<endl<<t1;
    cout<<"-----:Enter second time:-----";
    cout<<endl<<"__________________";
    if(cin>>t2){
        cout<<"Invalid input...!";
        return 0;
    }
    cout<<endl;
    cout<<"Second input is:-----"<<endl;
    cout<<endl<<t2;

    if(t1==t2){
        cout<<"__________________"<<endl;
        cout<<"---Time are same---";
        cout<<endl<<"__________________";
        return 0;
    }
    else{
        cout<<"__________________"<<endl;
        cout<<"---Time are not same---";
        cout<<endl<<"__________________";
        return 0;
    }


    cout<<endl;
    return 0;
}
