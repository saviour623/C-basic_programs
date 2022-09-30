#include <stdio.h>

int main(void)
{
	int array[] = {1, 2, 4, 5};
	int array1[] = {6, 7, 8, 9};
	int array2[] = {10, 11, 12, 13};

	int *ptr[3];
	ptr[1] = array;
	ptr[2] = array1;
	ptr[3] = array2;

	for (int i = 0; i < 4; i++)
		printf("%d\n", *ptr[1][i]);
	return 0;
}
