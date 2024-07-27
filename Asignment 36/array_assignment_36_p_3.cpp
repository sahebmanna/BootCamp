//3. Find the first and last element using the STL array.
#include <iostream>
#include <array>
using namespace std;
int main(){
    array<int,10> arr{11,21,13,14,15,61,71,18,91,110};
    cout<<"The first element is:-->"<<arr.front()<<endl;
    cout<<"The last element is:-->"<<arr.back()<<endl<<endl;
    cout<<"The first element is:-->"<<arr.at(0)<<endl;
    cout<<"The last element is:-->"<<arr.at(9)<<endl<<endl;
    cout<<"The first element is:-->"<<arr[0]<<endl;
    cout<<"The last element is:-->"<<arr[arr.size()-1];

    return 100;
}
