//1. Using STL Array gets and sets a reference to an element based on a given index.
#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,6> arr{11,12,13,14,15,16};

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    cout<<arr[5];

    arr[1]=100;
    arr[5]=500;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    /*cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;//approach 1
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    cout<<arr[5];
    */
    for(auto i: arr){
        cout<<i<<endl;//approach 2
    }

    return 0;
}
