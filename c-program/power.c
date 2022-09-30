#include <stdio.h>

int power(int x, int y);
/** power of a number e.g 2 ^ 2.
 * if the power is not 0;
 * @x: is the base and returned as result
 * if base is 1 assign 1 to x;
 * if base is zero, assign 0 to x
 * if x is a positive number > 0 or a negative number < 0:
 *multiply the base by itself @power-1 times. i.e @base * 1 is exempted.
 * if power is 0 result is 1 i.e 3 ^ 0 = 1.
 */

int main(void)
{
	long int x = 0;
	long int pow, base;
	printf("Enter base and power\n");
	scanf("%ld", &base);
	scanf("%ld", &pow);
	x = power(base, pow);

	printf("%ld ^ %ld = %ld\n",base, pow, x);
	return 0;
}

int power(int x, int y)
{
	 int i;
	const long int k = x;

	for (i = 0; i < (y-1); i++)
	{
		if (y != 0)
		{
			if (x == 0)
				x = 0;
			if (x == 1)
				x = 1;
			if (x > 1 || x < 0)
				x = x * k;
		}
		else
			x = 1;
	}
	return x;
}
