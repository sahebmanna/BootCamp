/*
2. Write a C++ program to add two numbers using single inheritance. Accept these two
numbers from the user in base class and display the sum of these two numbers in
derived class.
3. Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students.
4. Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation, department name, basic-salary) from
Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary
Output -
5. Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases
'n' items. Display the item-wise bill and total amount using appropriate
format.
Output -
6. Write a C++ program to demonstrate how a common friend function can
be used to exchange the private values of two classes. (Use call by
reference method).
7. Write class declarations and member function definitions for a C++ base
class to represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of �n� employees.
2. Display the details of �n� employees.
3. Search a given Employee by emp-code.
Output -
8 - In a bank, different customers have savings account. Some customers may
have taken a loan from the bank. So bank always maintain information about
bank depositors and borrowers.
Design a Base class Customer (name, phone-number). Derive a class
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of �n�
customers.
Output -
9. Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.
Output -
10. Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base
classes.
Write necessary member functions.


1. Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary.*/
#include<iostream>
#include<cstring>
using namespace std;

class person{
protected:
    char name[20];
    int age;

public:
    void setName(char *str){
        strcpy(name,str);
    }
    void setAge(int x){
        age=x;
    }

    char* getName(){
        return name;
    }
    int getAge(){
        return age;
    }
};
class Employee : public person{
    int empid ;
    int salary;
public:
    void setempid(int x){
        empid=x;
    }
    void setsalary(int x){
        salary=x;
    }
    int getempid(){
        return empid;
    }
    int getsalary(){
        return salary;
    }
    void display(){
        cout<<"name->"<<name<<" Age-> " <<age<<" Empid-> "<<empid<<" salary-> "<<salary<<endl;
    }

};


int main(){
    Employee p;
    p.setName("SahebManna");
    p.setAge(21);
    p.setempid(123);
    p.setsalary(200000);
    p.display();
    return 0;
}

