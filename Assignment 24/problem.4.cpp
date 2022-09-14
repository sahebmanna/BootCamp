#include<iostream>
using namespace std;
int factorial(int a);
int factorial(int a);
void pascaltriangle(int a);
int main(){
    int x;
    cout<<"Enter the number of lines:-->";
    cin>>x;
    pascaltriangle(x);
    return 0;
}
int factorial(int a){
        int temp=1;
        while(a>1){
            temp=temp*a;
              a--;
        }
        return temp;
}
int combination(int a,int r){

        return (factorial(a)/factorial(a-r)/factorial(r));
}
void pascaltriangle(int a){
        for(int i=1;i<=a;i++){
            int r=0;
            for(int j=1;j<=2*a-1;j++){
                    if(j>=4-i+1&&j<=4+i-1){
                        cout<<combination(i-1,r);
                        r++;
                    }
                    else{
                        cout<<" ";

                    }
            }
            cout<<endl;
        }
}
