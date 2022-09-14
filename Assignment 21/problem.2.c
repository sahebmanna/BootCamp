#include<stdio.h>
struct Employee{
    int id;
    char name[15];
    float salary;
};
int main(){
    struct Employee e;
    printf("Taking input from user id ,name ,salary:-->");
    scanf("%d",&e.id);
    fflush(stdin);

    fgets(e.name,20,stdin);
    scanf("%f",&e.salary);
    printf("id=%d,name=%s,salary=%f",e.id,e.name,e.salary);
    return 0;
}

