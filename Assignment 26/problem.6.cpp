//6. Define a class student and write a program to enter student details using constructor
//and define member function to display all the details.
#include<iostream>
#include<string.h>
using namespace std;
class Student{
        char name[20];
        int id;
        int roll;
        char Dept[20];

    public:
        Student(){
           cout<<"This is student Details constructor called..."<<endl;
        }
        ~Student(){
           cout<<" Student Details is Closed...";
        }
        void inputStudentDetails(){
            cout<<"Enter student name:-->";
            cin>>name;
            cout<<"Enter student id:-->";
            cin>>id;
            cout<<"Enter student roll:-->";
            cin>>roll;
            cout<<"Enter student Department name:-->";
            cin>>Dept;
        }
        void ShowInfo(){
            cout<<"The student name is:-->"<<name<<endl;

            cout<<"The student id is:-->"<<id<<endl;

            cout<<"The student roll is:-->"<<roll<<endl;

            cout<<"The student Department name is:-->"<<Dept<<endl;

        }

};
int main(){
    Student s1;
    s1.inputStudentDetails();
    cout<<endl;
    s1.ShowInfo();
    return 0;
}
