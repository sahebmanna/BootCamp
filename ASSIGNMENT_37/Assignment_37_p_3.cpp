//3. Write a function to print the element of a vector and take input from the user
#include<iostream>
#include<vector>
using namespace std;

int main(){
     vector <int> v;
     vector <int> v1;
     v.push_back(100);
     v.push_back(101);
     v.push_back(102);
     v.push_back(103);
     for(int i=0;i<v.size();i++){
          cout<<v[i]<<" ";
     }
     int n,a;
     cout<<"How many number you want to insert in the vector:-->";
     cin>>n;
     for(int i=0;i<n;i++){
            cin>>a;
          v1.push_back(a);
     }
     for(int i=0;i<v1.size();i++){
          cout<<v1[i]<<" ";
     }
     return 0;
}

