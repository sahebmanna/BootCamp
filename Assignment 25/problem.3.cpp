#include<iostream>
using namespace std;
class Factorial{
    private:
        int fact=1;
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
            int temp = n;
            while(temp!=1){
               fact = fact *temp;
               temp--;
            }
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
/*
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
            int s=1,i;
            for(i=1;i<=n;i++){
                s=s*i;
            }
            fact=s;
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
*/
