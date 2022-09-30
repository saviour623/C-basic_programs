#include <stdio.h>

int point(int);

int main(void)
{

	int p = 2;

	int *x;
	x = &p;

	printf("%d\n", *x);

	int *c;
	int arr[30] = {2, 4, 6, 8, 10, 34};

	int i;

	c = arr+3;

b	printf("%d\n", *(c-1));
	printf("\n");

	for (i = 0; i < 6; i++)
		printf("%d\n", *(arr+i));
	printf("\n");
	printf("\n");
	int sum = 0;
	int z;

	for (i = 0; i < 6; i++)
	{
		sum += *(arr + i) ;
	}
	printf("%d\n", sum);
	printf("\n");

	int v = *arr;
	for (i = 1; i < 6; i++)
	{
		if(*(arr+i) > v)
		{
			v  = *(arr + i);
		}
	}
	printf("The bigger number in the array is: %d\n", v);
	return 0;
}
