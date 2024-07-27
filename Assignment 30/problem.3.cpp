//3. Write a C++ program to perform arithmetic operations on two numbers and throw an exception if the dividend is zero or does not contain an operator.

#include<iostream>
using namespace std;

int main(){
    int num1,num2,result;
    char Operator;
    try{
        cout<<"Enter first number:-->";
        cin>>num1;
        //fflush(stdin);
        cout<<"Enter operator:-->";
        cin>>Operator;
        if(Operator!='+'&&Operator!='-'&&Operator!='/'&&Operator!='*')
            throw runtime_error("invalid operatore");
        cout<<"Enter second number:-->";
        cin>>num2;
        if(num2==0){
            runtime_error("dividant cant be Zero");
        }
        switch(Operator){
        case '+':
            result=num1+num2;
            break;
        case '-':
            result=num1-num2;
            break;
        case '/':
            result=num1/num2;
            break;
        case '*':
            result=num1*num2;
            break;

        }
        cout<<"The result is"<<result<<endl;

    }
    catch(exception &e){
        cout<<"Exception:-->"<<e.what()<<endl;;
    }

    return 0;
}
