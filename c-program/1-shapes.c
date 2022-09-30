#include <stdio.h>

int main(void)
{
	int i, r;

	for (i = 1; i <= 4; i++)
	{
		for (r = 1; r <= 4; r++)
			printf("&");
		printf("\n");
	}

	int x, c , m;

	for (x = 1; x <= 4; x++)
	{
		for (c = 1; c <= (x-1); c++)
			printf(" ");
		for (m = 1; m <= ((2 * x) - 1); m++)
			printf("*");
		printf("\n");
	}

        int w, b, o;

	for (w = 4; w >= 1; w--)
	{
		for (c = 4; c >= (w-4); c--)
			printf("z");
		for (o = 4; o >= ((2 * w) - 4); o--)
			printf("+");
		printf("\n");
	}
	return (0);
}
