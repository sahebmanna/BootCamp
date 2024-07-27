#include<stdio.h>
//void display(struct Employee e1);
struct Employee input();
struct Employee{
    int id;
    char name[15];
    float salary;
};
int main(){

    struct Employee e2;
    e2=input();
    display(e2);
    return 0;
}
void display(struct Employee e1){
            printf("ID=%d,Name=%s,Salary=%f",e1.id,e1.name,e1.salary);
}
struct Employee input(){
    struct Employee e;
    printf("Taking input from user id ,name ,salary:-->");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,20,stdin);
    scanf("%f",&e.salary);
    return e;
}

