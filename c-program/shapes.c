#include <stdio.h>

int main(void)
{
	int i;
	int y;

	for (i = 1; i <= 6; i++)
	{
		for (y = 0; y <= 6; y++)
		{
			if (y != 3)
			printf("8 ");
		}
		printf("\n");
	}
	return (0);
}
