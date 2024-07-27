//2. Using STL Array returns the total number of elements in the array.
#include <iostream>
#include <array>
#include<iterator>
using namespace std;

int main(){
    array<int,6> arr{1,2,3,4,5,6};
    cout<<"The size of the array is "<<arr.size()<<endl;
    int count=0;
    for(auto i=arr.begin();i!=arr.end();i++){
       count++;
    }
    cout<<count;
    return 0;
}
