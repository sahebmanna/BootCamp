//4. Returns the element from the given index using the STL array.
#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,6> arr={1,2,3,4,5,6};
    int index=3;
    for(int i=0;i<arr.size();i++){
        if(i==index){
            cout<<arr.at(i)<<endl;
        }
    }
    cout<<arr.at(index)<<endl;
    cout<<get<4>(arr)<<endl;
}
