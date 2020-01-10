#include <stdio.h>

float areaofcircle(float r);
int main()
  {
  for (float i = 3.5; i <= 12.5; i++)
  {
	float a = areaofcircle(i);
	printf("Area = %f\n", a);
  }
  }

float areaofcircle(float r)
  {
  return 3.14*r*r;
  }
