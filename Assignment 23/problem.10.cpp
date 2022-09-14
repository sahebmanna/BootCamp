#include<iostream>

using namespace std;
int main(){
    int a[10],i;
    cout<<"Enter the element of array:-->"<<endl;
    for(i=0;i<10;i++){
       cin>>a[i];

    }

    cout<<"The array elements are:-->"<<endl;
    for(i=0;i<10;i++){
       cout<<a[i];
       cout<<" ";
    }
    cout<<endl;
    return 0;
}

