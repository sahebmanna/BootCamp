/*3. Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays thepercentage of students.*/
#include<iostream>
#include<cstring>
using namespace std;
class base{
  protected:
    int che;
    int math;
    int phy;
public:
    void seter(int a, int b,int c){
        che=a;
        math=b;
        phy=c;
    }
};
class derived1 : public base{
protected:
    int total;
public:
    void total_of_three(){
         total= che+math+phy;
    }

};
class derived2 : public derived1{
    float x;
public:
    void percentage(){
         x= total/3.0;
    }
    void display(){
        cout<<"percentage->"<<x<<endl;
    }

};

int main(){
    derived2 d;
    d.seter(61,70,65);
    d.total_of_three();
    d.percentage();
    d.display();
    return 0;
}
