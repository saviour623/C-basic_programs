#include <stdio.h>
#include <stdlib.h>

//function that returns a pointer to a 2 dimensional array of integers
int **alloc_grid(int width, int height);

//function that frees a 2 dimensional grid previously created by your alloc_grid function
void free_grid(int **grid, int height);

int main(void)
{
	int **grid;
	int x, y, i, j;

	x = 4, y = 6;
	grid = alloc_grid(y, x);

	if (grid == NULL)
	{
		return (1);
	}

	for (i = 0; i < x; i++)
	{
		for (j = 0; j< y; j++)
			printf("%d", grid[i][j]);
		printf("\n");
	}

	free_grid(grid, x);
	return 0;
}

int **alloc_grid(int width, int height)
{
	int i,j;
	//dynamically allocating an array of pointers to store address of array as rows (same as int *p[3]
	int **p = (int**)malloc(height * sizeof(int*));

	if (p == NULL)
	{
		return NULL;
		exit;
	}
	//for each column dynamically allocate an array to represent rows
	for (i = 0; i < height; i++)
		p[i] = (int*)malloc(width  * sizeof(int));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j< width; j++)
			p[i][j] = 0;
	}
	return p;
}
 
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
