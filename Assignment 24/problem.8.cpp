#include<iostream>
using namespace std;

int area(int ,int );
float area(float );
int main(){
    int x,y;
    float z;
    cout<<"Enter the value of length and breadth:-->";
    cin>>x>>y;
    cout<<"Enter the value of radius:-->";
    cin>>z;
    cout<<"The area of rectangle is:-->"<<area(x,y);
    cout<<endl<<"The area of circle is:-->"<<area(z);

    return 0;

}
int area(int a,int b){
    return a*b;
}
float area(float a){
    return 3.14*a*a;
}
