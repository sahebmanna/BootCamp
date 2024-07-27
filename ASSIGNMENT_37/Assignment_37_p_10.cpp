//10. Write a program to check whether an element exists in a vector or not
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
     v.push_back(12);
     v.push_back(13);
     v.push_back(14);
     v.push_back(15);
     v.push_back(16);
    int element;
    cout<<"Enter the element:-->";
    cin>>element;
    vector<int>::iterator it=find(v.begin(),v.end(),element);

    if(it!=v.end()){
        cout<<"The Element '"<<element<<"' found at position:-->";
        cout<<it-v.begin()+1;
    }else
        cout<<"Element not found";

}
