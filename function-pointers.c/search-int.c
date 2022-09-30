#include <stdio.h>

/**function searches for an int in an array.
 * Return: -1 if false else returns index of the number
 */

int int_index(int *array, int size, int (*cmp)(int));

//check if number == 98. returns zero if false else otherwise.
int is_98(int elem)
{
	return (98 == elem);
}

//check if the absolute value of a number is == 98;
int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}

int int_index(int *array, int size, int (*cmp)(int)){
	int i;
	if (!(array))
		return -1;
	if (!(size))
		return -1;
	if (!(cmp))
		return -1;
	for (i = 0; i < size; i++){
		if (cmp(array[i]))
			return i;
	}
	return -1;
}

int main(void)
{
	int index, absolute;
	int array[] = {12, -98, 5};

	index = int_index(array, 3, is_98);
	absolute = int_index(array, 3,abs_is_98);
	printf("%d\n", index);
	printf("%d\n", absolute);
	return (0);
}
