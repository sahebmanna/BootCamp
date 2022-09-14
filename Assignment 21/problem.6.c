#include<stdio.h>
#include<string.h>
struct Employee input();
struct Employee{
    int id;
    char name[15];
    float salary;
};
int main(){
    struct Employee e[3];
    int i;
    for(i=0;i<=2;i++){
        e[i]=input();
    }
    sortByName(e,3);
    for(i=0;i<=2;i++){
        display(e[i]);
    }

    return 0;
}
void display(struct Employee e1){
            printf("id=%d,name=%s,salary=%f\n",e1.id,e1.name,e1.salary);
}
struct Employee input(){
    struct Employee e;
    printf("Taking input from user id ,name ,salary:-->\n");
    scanf("%d",&e.id);
    fflush(stdin);
    gets(e.name);
    scanf("%f",&e.salary);
    return e;
}
void sortByName(struct Employee e1[],int size){
        int i,r;
        struct Employee temp;
        for(i=0;i<size;i++){
            for(r=i+1;r<=size-1;r++){
                if(strcmp(e1[i].name,e1[r].name)>0){

                    strcpy(temp.name,e1[i].name);
                    strcpy(e1[i].name,e1[r].name);
                    strcpy(e1[r].name,temp.name);
                }

            }
        }

}

