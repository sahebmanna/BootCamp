//6. Write a C++ Program to find Sum of Array using function template.
#include<iostream>
using namespace std;
template<class t>
t sum(t b[],int n){
    t temp=b[0];
    for(int i=1;i<n;i++){
      temp+=b[i];
    }
    return temp;

}


int main(){
    float a[20]={12.2,13.2,14.2,15.1,16.1,17.2};
     float value=sum(a,6);
     cout<<"the sum of array is :-->"<<value;
     return 0;
}
