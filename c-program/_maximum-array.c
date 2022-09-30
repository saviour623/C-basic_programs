#include <stdio.h>
#include "prototype.h"

int main(void)
{
	int number;
	int array1[] = {3, 4, 5, 8, 9, 2, 1};

	number = _min(array1, 7);
	printf("The lowest number ofnthe array is =%d\n", number);
	return 0;
}

int _min(int array[], int length)
{
	int i, min;
	min = array[0];
	for (i = 1; i < length; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
		return min;
}
