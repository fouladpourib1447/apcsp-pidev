#include <stdio.h>

float areaofcircle(float r);
int main()
  {
  char input[256];
  float lowerradius;
  printf("Enter a lower bound radius.\n");
  fgets(input, 256, stdin);
  sscanf(input, "%f", &lowerradius);

  char input2[256];
  float upperradius;
  printf("Enter an upper bound radius.\n");
  fgets(input2, 256, stdin);
  sscanf(input2, "%f", &upperradius);
  if (lowerradius >= upperradius)
  {
	printf("Enter a higher number than your lower bound radius, try again.");
  }
  else
  {
  for (float i = lowerradius; i <= upperradius; i++)
  {
	float a = areaofcircle(i);
	printf("Area = %f\n", a);
  }

  }
  }
float areaofcircle(float r)
  {
  return 3.14*r*r;
  }
