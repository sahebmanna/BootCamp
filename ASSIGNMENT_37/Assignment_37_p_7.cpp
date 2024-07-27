//7. Write a program to find sum of vector elements
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(){
     vector <int> v;
     v.push_back(12);
     v.push_back(13);
     v.push_back(14);
     v.push_back(15);
     v.push_back(16);

     int sum=accumulate(v.begin(),v.end(),0);
     cout<<"sum of the vector is:-->"<<sum;
     return 0;

}
