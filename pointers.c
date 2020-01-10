#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  int d;
  int* ptrtod;
  ptrtod = &d;
  d = 2;
  printf("The value of d is %d\n", d);
  *ptrtod = 1;
  printf("The value of ptrtod is %d\n", ptrtod);
  printf("It stores the value %d\n", *ptrtod);
  printf("The address of d is %d\n", &d);
  int f = *ptrtod;
  *ptrtod = 3;

  int e;
  int* ptrtoe;
  ptrtoe = &e;
  e = 3;
  printf("The value of e is %d\n", e);
  *ptrtoe = 4;
  printf("The value of ptrtoe is %d\n", ptrtoe);
  printf("It stores the value %d\n", *ptrtoe);
  printf("The address of d is %d\n", &e);
  int g = *ptrtoe;
  *ptrtoe = 2;

  printf("d=%d, e=%d\n", d, e);

}
