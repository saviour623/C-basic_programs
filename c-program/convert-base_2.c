#include <stdio.h>
#include <stdlib.h>
//convert base 10 to binary and store in a string.
char *binary(int x, char *str);

int main(void)
{
	int x = 17;
	char *y;
	char *str;
	str = (char*) malloc(4 * sizeof(char));

	y = binary(x, str);
	printf("%s\n", y);

	free(str);
	return 0;
}
char *binary(int x, char *str)
{
	int length = 0;
	int i,j,p;

	j = 0;
	while (x != 0)
	{
		//if the remainder of x is == 1 or 0 store in as string in array
		if (x % 2 == 0)
			str[length] = '0';
		if (x % 2 == 1)
			str[length] = '1';
		//divide x. since x is an integer its float will be discarded.
		x = x/2;

		j++;
		length++;

	}

	/**decimal - binary is usually the reverse of the remainders.
	 * so we will reverse the string
	 */
	p = length/2;
	char k;

	for (j = 1, i = 0; j < p, i < p; j++, i++)
	{
		k = str[i];
		str[i] = str[length - j];
		str[length - j] = k;
		}
	return str;
}
