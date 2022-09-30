#include <stdio.h>

int main(void)
{
	int _2d[3][3] = {{1, 2 , 3},{4, 5, 6}, {7, 8, 9}};
	int x, *y, z, i;
	x = _2d[0][0];
	y = &_2d[0][0];
	printf("%d\t%d\n", x, *(*(_2d + 1)+1));
	printf("%d\n", *(y + 6));

	return 0;
}
