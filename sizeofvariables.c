#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'g';
  float c = 2.22;
  double d = 4.4444;
  unsigned int e = 3;
  short int f = 1;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char b value: %c and size: %d bytes\n", b, sizeof(b));
  printf("float c value: %f and size: %d bytes\n", c, sizeof(c));
  printf("double d value: %f and size: %d bytes\n", d, sizeof(d));
  printf("unsigned int e value: %d and size: %d bytes\n", e, sizeof(e));
  printf("short int f value: %d and size: %d bytes\n", f, sizeof(f));

}

