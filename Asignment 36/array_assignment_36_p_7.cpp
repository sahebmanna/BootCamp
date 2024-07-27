//7. Sort an array in ascending order using sort() function in C++ STL
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int array[100];
    int n;
    cout<<"how any number you want to insert?:-->";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    sort(array,array+n);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
