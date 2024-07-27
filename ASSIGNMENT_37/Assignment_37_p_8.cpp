//8. Write a program to find common elements between two vectors.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
     vector <int> v;
     v.push_back(12);
     v.push_back(13);
     v.push_back(14);
     v.push_back(15);
     v.push_back(16);

     vector <int> v1{12,11,14,13};
     sort(v.begin(),v.end());
     sort(v1.begin(),v1.end());
     vector <int> v3(v.size()+v1.size());

     vector <int>::iterator it,end;

     end=set_intersection(v.begin(),v.end(),v1.begin(),v1.end(),v3.begin());

     for(it=v3.begin();it!=end;it++){
        cout<<*it<<" ";
     }

}
