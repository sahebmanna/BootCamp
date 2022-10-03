/*10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
*/
#include<iostream>
#include<stdio.h>
using namespace std;
class Matrix
{
    int a[3][3];
    public:
        void accept(){

            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cin>>a[i][j];
                }
            }

        }
        void display(){

            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<a[i][j]<<"\t";
                }
            cout<<"\n";
            }
        }
        Matrix operator+(Matrix arr){
            Matrix temp;
          for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    temp.a[i][j]=a[i][j]+arr.a[i][j];
                }
            cout<<"\n";
            }
            return temp;
        }


};
int main(){
    Matrix m1,m2,m3;
    cout<<" Enter first Matrix elements(3x3):\n";
    m1.accept();
    cout<<" Enter second Matrix elements(3x3):\n";
    m2.accept();
    cout<<" the first Matrix elements are >:\n";
    m1.display();
    cout<<" the second Matrix elements are >:\n";
    m2.display();
    m3=m1+m2;
    cout<<" the merge Matrix elements are >>:\n";
    m3.display();
    return 0;
}
