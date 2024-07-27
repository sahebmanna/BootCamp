//3. Write a C++ program to find the largest of three elements using a template.
#include<iostream>
using namespace std;
template<class t,class u,class v>
void largeofthree(t x,u y,v z){
    if(x>y&&x>z){
        cout<<"the large number is:->"<<x;
    }
    if(x>y&&x<z){
        cout<<"the large number is:->"<<z;
    }
    if(x<y&&y>z){
        cout<<"the large number is:->"<<y;
    }

}
int main(){
    largeofthree<float,int,float>(5.7,6,0.9);

    return 0;
}
