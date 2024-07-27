//1. Declare a vector with Initialization and print the elements.

#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int> v{12,13,14,15,16};
     for(int i=0;i<v.size();i++){
          cout<<v[i]<<" ";
     }
     return 0;
}