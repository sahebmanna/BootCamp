/*Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).
*/
#include<iostream>
#include<stdio.h>
using namespace std;
class mystring
{
    char str[100];
    public:
        void accept(){
            cout<<" Enter string :\n";
            //cin.ignore();
            cin.getline(str,100);

        }
        void display(){
            cout<<" the strings are :\n";
            cout<<str;
            cout<<"\n";

        }
        void operator!(){

         for(int i=0;str[i]!=NULL;i++){
            if(str[i]>=65&&str[i]<=90){
               str[i]=str[i]+32;
            }
            if(str[i]>=97&&str[i]<=122){
                str[i]=str[i]-32;
            }
         }
         cout<<"The reverse case string is :"<<str;
        }



};
int main(){
    mystring mys1;
    mys1.accept();
    mys1.display();
    !mys1;
    //mys1.display();
    return 0;
}
