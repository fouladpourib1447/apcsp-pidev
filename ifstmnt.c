#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;

  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  if (a == b)
  {
	printf("a is equal to b\n");
  }
  else
  {
	printf("a is not equal to b\n");
  }
  if (a != b)
  {
	printf("a is not equal to b\n");
  }
  else
  {
	printf("a is equal to b\n");
  }
  if (a > b)
  {
	printf("a is greater than b\n");
  }
  else
  {
	printf("a is not greater than b\n");
  }
  if (a >= b)
  {
	printf("a is greater than or equal to b\n");
  }
  else
  {
	printf("a is not greater than or equal to b\n");
  }
  if (a == 0 && b == 0)
  {
	printf("a AND b are equal to 0\n");
  }
  else
  {
	printf("a AND b are not equal to 0\n");
  }
  if (a == 0 || b == 0)
  {
	printf("a OR b is equal to 0\n");
  }
  else
  {
	printf("a or b are not equal to 0\n");
  }
  if (!(a == 0))
  {
	printf("a is NOT equal to 0\n");
  }
  else
  {
	printf("a is equal to 0\n");
  }
}
