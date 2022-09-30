#include <stdio.h>

/**convert base 2 to decimal
 * @str: array that contains binary string
 */
int decimal(char *str, int length);
int power(int x, int y);

int main(void)
{
	char str[] = "11101"; 
	int x = 0;
	int v;
	v = decimal(str, 5);
	printf("%d\n", v);

	return 0;
}
int decimal(char *str, int length)
{
	int i,j,p,v;
	int num[0+length];
	int x;

	p = 0;
	x = 0;
	//converts individual string to integer and store in integer array
	for (i = 0; str[i]; i++)
	{
		p = str[i] - '0';
	        num[i] = p;

	}

/**convert binary to decimal using the formular binary * (base ^ n +...)
 * @j: power of the base, starting from 0 to length - 1. e.g n x 2³ + n x 2² e.t.c.
 */

	for (i = 0, j = (length - 1); i < length, j >= 0; j--, i++)
	{
		//power function called for 2 ^ j.
		v = power(2, j);

		x += num[i] * v;
	}
	return x;
}
//power function
int power(int x, int y)
{
	int i;
	const int k = x;

	if (y == 0)
		x = 1;
	else
	{
		for (i = 0; i < (y - 1); i++)
		{
			if (x == 0)
				x = 0;
			if (x == 1)
				x = 1;
			if (x > 1 || x < 0)
				x = x * k;
		}
	}
	return x;
}
