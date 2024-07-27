//6. Using STL to check whether an array is empty or not.
#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,5> arr={1,2,3,4,5};
    cout<<arr.empty();
    cout<<endl;
    if(arr.empty()){
        cout<<"ARRAY is empty";
    }else{
        cout<<"ARRAY is not empty";
    }


}
