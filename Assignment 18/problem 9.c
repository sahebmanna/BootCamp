//9. Write a function to reverse a string word wise. (For example if the given string is
//“Mysirg Education Services” then the resulting string should be “Services Education
//Mysirg” )problemS
#include<stdio.h>
//#include<string>
void swap(char a[],int i,int j){
    char temp;
    while(i<=j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;j--;
    }
}

int main(){
    int i=0,finish=0,end=0,start=0;
    char str[20];
    printf("Enter a string:-->");
    gets(str);

    while(str[i]!='\0')
    {
       while(str[i]!=' ')
        {
            if(str[i]=='\0')
            {
                finish=1;
                break;
            }
        end++;
        i++;
       }
       swap(str,start,end-1);
       if(finish==1)
       {
        break;
       }
       start=end++;
        i++;
    }
    swap(str,0,i-1);
    printf("The string is =%s",str);


    return 0;
}

