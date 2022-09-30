#include <stdio.h>

int calc(int);

int main(void)
{
	int num;
	num = 8;
	calc(num);
}
int calc(int num)
{
	int i, j;
	for (i = 0; i <= num; i++)
	{
		for (j = 0; j <= num; j++)
		{
			int x;
			x = i * j;
			printf("%d", x);
			if (j < num)
				printf(" ,");
		}
		printf("\n");
	}
	return 0;
}
