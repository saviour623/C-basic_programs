#include <stdio.h>

/** main - the main function calls the
 * swap funtion and print
 * @array: 2D array
 * @swap: swap arrays
 * Return: 0 (success)
 */

/* function prototype for swap function */
void swap(int array[2][4], int row1, int row2, int col);

int main(void)
{
	int array[][4] = {{1,2,3,4},
		       {5,6,7,8},
		       {9,8,7,6}};
	swap(array, 0, 2, 4);

	int i;
	int j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d", array[i][j]);
			if (j != 3)
				printf(" ,");
		}
		printf("\n");
	}
	return 0;
}

/* function to swap rows in the 2d array */
void swap(int array[2][4], int row1, int row2, int col)
{
	int array1[4];
	int j;

	for (j = 0; j < col; j++)
			array1[j] = array[row1][j];

	for (j = 0; j < col; j++)
		{
			array[row1][j] = array[row2][j];
			array[row2][j] = array1[j];
		}
}
