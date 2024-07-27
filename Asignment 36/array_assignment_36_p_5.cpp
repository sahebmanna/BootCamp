//5. C++ STL program to demonstrate example of array::rbegin() and array::rend() functions
#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> arr={1,2,3,4,5};
    for(auto i=arr.begin();i<arr.end();i++){
        cout<<*i<<" ";
    }
    return 0;

}
