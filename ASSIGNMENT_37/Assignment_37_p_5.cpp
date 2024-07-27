//5. Find largest and smallest elements in a vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(11);
    v.push_back(100);
    v.push_back(12);
    cout<<*max_element(v.begin(),v.end())<<endl;
    cout<<*min_element(v.begin(),v.end())<<endl;
    return 0;
}
