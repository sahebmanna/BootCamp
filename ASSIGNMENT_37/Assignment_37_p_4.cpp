//4. Write a program to Copy one vector’s elements to another vector.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> v1;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v1.swap(v);
    for(int i=0;i<v1.size();i++){
          cout<<v1[i]<<" ";
     }
}
