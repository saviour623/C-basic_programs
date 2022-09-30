#include <stdio.h>

int main()
{
	int salary;

	printf("Hey worker, enter your salary");

	salary = 14;

	int *point;

	point = &salary;

	while (*point)
	{
		printf("%d\n", *point);
		*(point++);
	}
	return 0;
}
