#include<stdio.h>
//void display(struct Employee e1);
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
    sortByPrice(e,3);
    for(i=0;i<=2;i++){
        display(e[i]);
    }
    printf("%s",e[2].name);
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
void sortByPrice(struct Employee e1[],int size){
        int i,r;
        struct Employee temp;
        for(i=0;i<size;i++){
            for(r=i+1;r<=size-1;r++){
                if(e1[i].salary<e1[r].salary){

                    r++;
                }
                else{
                    temp=e1[r];
                    e1[r]=e1[i];
                    e1[i]=temp;
                }
            }
        }

}

