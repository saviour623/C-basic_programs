#include <stdio.h>

int length(char str[]);
/** length - length of string
 *
 *Return: 0 (success
 */

int main(void)
{
	char str1[] = "Copy all the string";
	int x;

	x = length(str1);

	printf("%d\n", x);

	return 0;
}
int length(char str[])
{
	int i;

	for (i = 0; str[i] != '\0'; i++);

	return i;
}
