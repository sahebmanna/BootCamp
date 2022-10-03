/*Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
*/
#include<iostream>
#include<stdio.h>
using namespace std;
class Matrix
{
    int a[3][3];
    public:
        void accept(){
            cout<<" Enter Matrix element(3x3):\n";
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cin>>a[i][j];
                }
            }

        }
        void display(){
            cout<<" The Matrix element are :\n";
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<a[i][j]<<"\t";
                }
            cout<<"\n";
            }
        }
        int operator-(){
          for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    a[i][j]=-a[i][j];
                }
            cout<<"\n";
            }
        }


};
int main(){
    Matrix m;
    m.accept();
    m.display();
    -m;
    m.display();
    return 0;
}
