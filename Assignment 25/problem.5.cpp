#include<iostream>
using namespace std;
class ReverseNumber{
      private:
          int x;
          int y;
      public:
          void setval(int a){
              x=a;
          }
          int getval(){
              return x;
          }
          void getrev(){
              while(x>0){
               y=x%10;
               cout<<y;
               x=x/10;
              }
          }
};
int main(){
    ReverseNumber R;
    R.setval(123456789);
    cout<<"Reverse of "<<R.getval()<<"is"<<endl;
    R.getrev();
   // cout<<"Reverse of "<<R.getval()<<"is"<<R.getval1()<<endl;
    return 0;
}
