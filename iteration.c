#include <stdio.h>

int main()
{

	printf("Divided by 4:\n");
	for (int i = 0; i < 101; i++)
	{
		if (i % 4 == 0)
			printf("%d\n", i);
	}
}
