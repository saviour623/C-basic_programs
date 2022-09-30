#include <stdio.h>

void reverse(int *x, int length);

int main(void)
{
	int x[] = {1,2,3,4,5};

	reverse(x, 5);
	for (int i = 0; i < 5; i++)
		printf("%d\n", x[i]);

	return 0;
}

void reverse(int *x, int length)
{
	int i,j;
	int c = length/2;

	for (j = 1, i = 0; j < c, i < c; j++, i++)
	{
		int y = x[i];
		x[i] = x[length - j];
		x[length - j] = y;
	}
}
