#include <stdio.h>

  struct Student {
	char firstname[30];
	char lastname[30];
	int age;
	int studentid;
  };

  void printStudent(struct Student* student);

  int main()
  {
	char input[256]; firstname[256];
	printf("First name\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", firstname);

	char input2[256]; lastname[256];
	printf("Last name\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", lastname);

	char input3[256];
	float age;
	printf("Age\n");
	fgets(input3, 256, stdin);
	sscanf(input3, "%f", &age);

	char input4[256];
	float studentid[256];
	printf("Student id\n");
	fgets(input4, "%f", &studentid);
  }
  int printStudent();
  {
