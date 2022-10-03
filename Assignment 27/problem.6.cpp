/*6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.
*/
#include<iostream>
#include<string.h>
using namespace std;
class CString
{
    char str[20];
    public:

        void inputCString(){

            cin>>str;
        }
        void ShowInfo(){
            cout<<str<<endl;
        }
        CString operator+(CString s){
            CString temp;
            strcat(str,s.str);
            strcpy(temp.str,str);
            return temp;
        }
       int operator==(CString &s){
            for(int i=0;str[i]!=NULL;i++){
                for(int j=0;str[j]!=NULL;j++){
                    if(str[i]==s.str[j]){
                        return 1;
                    }
                    else
                        return 0;

                }
            }
        }
};
int main(){
    CString str1,str2,str3;
    cout<<"____________________________"<<endl;
    cout<<"Enter First string:--->";
    str1.inputCString();
    cout<<"Enter second string:--->";
    str2.inputCString();
    cout<<"____________________________"<<endl;
    cout<<endl;
    cout<<"____________________________"<<endl;
    cout<<"The First string is:--->";
    str1.ShowInfo();

    cout<<"The second string is:--->";
    str2.ShowInfo();
    cout<<"____________________________"<<endl;
    if(str1==str2){
       cout<<"Two string is equal..."<<endl;
    }
    else
        cout<<"both string are different..."<<endl;

    cout<<"____________________________"<<endl;
    str3=str1+str2;
    cout<<"concatenated string is:-->";
    str3.ShowInfo();
    cout<<"____________________________"<<endl;
    cout<<endl;


    return 0;
}
