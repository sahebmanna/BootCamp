/* 7. Write class declarations and member function definitions for a C++ base
class to represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours,hourly rate, salary).
Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.
3. Search a given Employee by emp-code.
Output - */

#include<iostream>
using namespace std;

class Employee{

public:
    int emp_code;
    char name[25];
    void set(){
        cout<<"\n Enter employe id :-->";
        cin>>emp_code;
        cout<<"\n Enter employe name :-->";
        cin>>name;
    }
};
class Fulltime : public Employee{
    int daily_rate;
    int days;
    int salary;

public:
    Fulltime(){
        daily_rate=0;
        days=0;
        salary=0;
    }
    void set1(){
         cout<<"\n Enter daily_rate :-->";
        cin>>daily_rate;
        cout<<"\n Enter days :-->";
        cin>>days;
    }
    void cal(){
      salary=daily_rate*days;
    }
    void show(){
        cout<<"\n -----------------------";
        cout<<"\n employe id :-->"<<emp_code;
        cout<<"\n employe name :-->"<<name;
        cout<<"\n Daily rate:--> "<<daily_rate;
        cout<<"\n days:--> "<<days;
        cout<<"\n yearly salary :-->"<<salary;
        cout<<"\n -----------------------";
    }


};
class Parttime : public Employee{
    int hours;
    int hourly_rate,salary1;
public:
    void set2(){
        cout<<"Enter hours :-->";
        cin>>hours;
        cout<<"\n Enter hourly_rate :-->";
        cin>>hourly_rate;
    }
    void cal1(){
      salary1=hourly_rate*hours;
    }
    void show1(){
        cout<<"\n ---------------------";
        cout<<"\n employe id :-->"<<emp_code;
        cout<<"\n employe name :-->"<<name;
        cout<<"\n hourly_rate:--> "<<hourly_rate;
        cout<<"\n hours :--> "<<hours;
        cout<<"\n yearly salary :-->"<<salary1;
        cout<<"\n ---------------------";
    }
};

int main(){
    int x,var=0,var1=0;
    Fulltime f[100];
    Parttime p[100];
    do{
        cout<<endl;
        cout<<"\n ------------------------";

        cout<<"\n 1: Enter employe details";
        cout<<"\n 2: Show all emp details";
        cout<<"\n 3: search details";
        cout<<"\n 4: exit";
        cout<<"\n Enter your choice :-->";
        cin>>x;
        cout<<"\n ------------------------";
        switch(x)
        {
        case 1:
            int y;
            cout<<"\n 1: Fulltime employe";
            cout<<"\n 2: parttime employe";
            cout<<"\n Enter your choyace :-->";
            cin>>y;
             switch(y)
             {
                case 1:
                    f[var].set();
                    f[var].set1();
                    f[var].cal();
                    var++;
                    break;

                case 2:
                    p[var1].set();
                    p[var1].set2();
                    p[var1].cal1();
                    var1++;
            }
            break;
        case 2:
            for(int i=0;i<var;i++){
               f[i].show();
            }
            for(int i=0;i<var1;i++){
                p[i].show1();
            }
            break;
        case 3:
            int a;
            cout<<"\n Enter employe number:-->";
            cin>>a;
            for(int i=0;i<var;i++){
                if(f[i].emp_code==a){
                    f[i].show();
                }
            }
            for(int i=0;i<var1;i++){
                if(p[i].emp_code==a){
                    p[i].show1();
                }
            }
    }
    }while(x!=4);

    return 0;
}
