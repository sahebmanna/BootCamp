/*4. Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation, department name, basic-salary) from
Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary
Output -
*/
#include<iostream>
#include<cstring>
using namespace std;
class Person{
  protected:
    string name;
    string address;
    int phone_no;
 /* public:
    void setperson(char *p,char *q,int *x){
        strcpy(name,p);
        strcpy(address,q);
        strcpy(phone_no,x);
    }*/

};
class Employee:public Person{
  public:
    int eno;
    string ename;
  /*public:
     void setemployee(int p,char *q){
        eno=p;
        strcpy(ename,q);
    }*/
};
class Manager:public Employee{
  public:
    string designation;
    string department_name;
    int basic_salary;
  public:
    /* void setmanager(char *p,char *q,int *x){
        strcpy(designation,p);
        strcpy(department_name,q);
        strcpy(basic-salary,x);
    }*/
    void Acceptdetails(){
        cout<<"Enter Details of Manager "<<endl;
        cout<<"------------------------ "<<endl;
        cout<<"Enter employee number. : "<<endl;
        cin>>eno;
        cout<<"Enter phone_no. : "<<endl;
        cin>>phone_no;
        cout<<"Enter employe name. : "<<endl;
        cin>>ename;
        cout<<"Enter employee address. : "<<endl;
        cin>>address;
        cout<<"Enter employee department_name. : "<<endl;
        cin>>department_name;
        cout<<"Enter employee basic-salary. : "<<endl;
        cin>>basic_salary;
    }

};

int main(){
    int i,n,temp;
    Manager m[100];
    cout<<"How many manager details you want to enter !";
    cin>>n;

    for(i=1;i<=n;i++){
        m[i].Acceptdetails();
    }
    temp=0;
    for(i=1;i<=n;i++){
        if(m[temp].basic_salary<m[i].basic_salary)
        temp=i;
    }
    cout<<"Manager with highestsalary is : "<<m[temp].basic_salary<<endl;
    cout<<"Manager name is : "<<m[temp].ename;
    return 0;
}
