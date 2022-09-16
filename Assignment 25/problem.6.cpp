#include<iostream>
using namespace std;
class Square{
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
     int getval1(){
         return y;
     }
     int squerof(){
         int z=1;
         z=x*x;
        return z;

     }

};
int main(){
   Square sq;

   for(int i=11;i<=19;i++){
        sq.setval(i);
        cout<<"n="<<" "<<sq.getval()<<", "<<"n^2="<<sq.squerof()<<endl;
   }

   return 0;

}
