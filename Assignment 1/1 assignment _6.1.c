#include <stdio.h>
#include <string.h>
int main()
{
  char string[100];
  int length;

  printf("Enter a string to calculate its length\n");
  gets(string);

  length = strlen(string);

  printf("Length of the string = %d\n", length);

  return 0;
}
