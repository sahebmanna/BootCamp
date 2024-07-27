//3. Overload subscript operator [] that will be useful when we want to check for an index
//out of bound.
#include<iostream>
#include<stdio.h>
using namespace std;
const int size=10;
class Subscript
{
    int a[size];
    public:
        Subscript(){

            for(int i=0;i<size;i++){
                a[i]=i;
            }
        }

        int operator[](int t){

          if(t>size){
            cout<<"Array out of bound"<<endl;
          }
          return a[t];
        cout<<"\n";
        }



};
int main(){
    Subscript s1;
    cout<<s1[2]<<endl;
    cout<<s1[6]<<endl;
    cout<<s1[11];
    return 0;
}

