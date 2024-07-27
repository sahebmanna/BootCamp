//6. Write a program to reverse vector elements
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    for(auto i=v.rbegin();i<v.rend();i++){
        cout<<*i<<" ";
    }
    return 0;
}
