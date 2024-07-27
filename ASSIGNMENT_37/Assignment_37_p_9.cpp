//9. Write a program to Push and print elements in a float vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector <float> v;
     v.push_back(12.1);
     v.push_back(13.2);
     v.push_back(14.6);
     v.push_back(15.6);
     v.push_back(16.9);
     for(int i=0;i<v.size();i++){
     cout<<v[i]<<" ";
}

}
