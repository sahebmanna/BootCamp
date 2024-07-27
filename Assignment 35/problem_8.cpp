//8. Write a C++ Program to implement push and pop methods from stack using template.
#include<iostream>
#include<stack>
using namespace std;
template <class T>

class Stack{
       int top;
       T st[100];
    public:
       Stack();
       void push(T i);
       T pop();
};
template <class T>
Stack<T>::Stack()
{
        top = -1;
}
template <class T>
void Stack<T>::push(T i)
{
        st[++top] = i;
}
template <class T>
T Stack<T>::pop()
{
        return st[top--];
}

int main ()
{
    Stack<int> s1;
    Stack<string> s2;
    s1.push(67);
    s2.push("Hello");
    s2.push("Hi Broo");
    cout << s1.pop() << endl<< endl;
    cout << s2.pop() << endl;
    cout << s2.pop() << endl;
    return 0;
}
