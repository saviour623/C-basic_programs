#include <stdio.h>

int *retry(int array[], int);

int main(void)
{
	int y = 7;
	int i;

	int array[10];
	int *p = retry(array, y);

	for (i = 0; i < 7; i++)
		printf("\t%d\n", p[i]);
	return 0;
}
int *retry(int array[], int y)
{
	int i;
	for (i = 0; i < y; i++)
		array[i] = i;
	return array;
}
