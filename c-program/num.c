#include <stdio.h>

int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y != 6 && y != 8)
			printf("%d ", y);
		}
		printf("\n");
	}
		return (0);
}
