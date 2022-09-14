#include<iostream>
using namespace std;
class Factorial{
    private:
        int fact;
        int n;
    public:
        void Set(int x){
            n=x;
        }
        int getn(){
            return n;
        }
        int getfactorial(){
            return fact;
        }

        void fac(){
            int temp=1;
            while(n>=1){
               temp=temp*n;
               n--;
            }
            /*for(int i=1;i<=n;i++){
                temp=temp*n;
            }
            */
            fact=temp;
        }

};
int main(){
    Factorial f1,f2;
    f1.Set(5);
    f1.fac();
    f2.Set(6);
    f2.fac();
    cout<<"factorial of "<<f1.getn()<<" is "<<f1.getfactorial()<<endl;
    cout<<"factorial of "<<f2.getn()<<" is "<<f2.getfactorial()<<endl;
    return 0;
}
