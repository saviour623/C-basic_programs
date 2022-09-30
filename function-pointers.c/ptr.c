#include <stdio.h>

int main(void)
{
	int array[][4] = {{1,2,3,4},
			  {5,6,7,8},
			  {9,10,11,12}};
	int *ptr;

	ptr = &**array;

	for (int i = 0; i < 12; i++)
		printf("%d\n", *(ptr + i));
	return 0;
}
