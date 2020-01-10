#include <stdio.h>
#include <string.h>

int main()
{
  char myString1[27] = "abcdefghijklmnopqrstuvwxyz";
  	printf("%s\n", myString1);
  char myString2[27];
  for (c = 'a'; c <= 'z'; ++c)
  {
	printf("%c", myString2);
  }
  printf("\n%s %c\n", myString1, c);
  if (strcmp(myString1, myString2) == 0)
	printf("the strings are identical\n");
  else
	printf("the strings are different\n");
  return 0;
  char myString3[27];
}
