/*1.[ Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user.]
2. Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user.
3. Write a program to read and display a 2D array of strings in C language.
4. Write a program to search a string in the list of strings.
5. Suppose we have a list of email addresses, check whether all email addresses have
�@� in it. Print the odd email out.
6. Write a program to print the strings which are palindrome in the list of strings.
7. From the list of IP addresses, check whether all ip addresses are valid.
8. Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {�the�,�quick�,�brown�,�fox�,�quick�}
 word1 = �the�, word2 = �fox�, OUTPUT : 1 )
9. Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed
10. Create an authentication system. It should be menu driven  */
#include<stdio.h>
#include<string.h>

int main(){
    char str[5][20];

    for(int i=0;i<5;i++){
        printf("Enter string no %d:-->",i);
        gets(str[i]);//scanf("%s",str[i]);
    }
   int count=0;
   for(int i=0;i<5;i++){
    //  int count=0;
      int l=strlen(str[i]);
      for(int j=0;j<l;j++){
        if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')
            count+=1;
      }
      printf("%s has = %d vowels\n",str[i],count);
      //printf("%d\n",count);
      count=0;
   }

    return 0;
}
