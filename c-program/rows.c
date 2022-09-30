#include <stdio.h>

int main(void)
{
	int n;
	int m;
	int row;
	int column;
	int rows;
	int columns;

	printf("enter any number of rows");
	scanf("%d", &n);

	for (row = 0; row <= n; row++)
	{
		for (column = 1; column <= row; column++)
			printf("*");
		printf("\n");
	}

	for (rows = 0; rows <= n; rows++)
	{
		for (columns = 0; columns <= n - rows; columns++)
			printf("*");
		printf("\n");
	}
	return (0);
}
