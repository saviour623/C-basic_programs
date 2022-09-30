#include <stdio.h>
void copy(char str[], char new[]);
/** copy - copy string
 *
 *Return: 0 (success
 */
int main(void)
{
	char str1[] = "Copy all the string";
	char str2[100];

	copy(str1, str2);

	printf("%s\n", str2);

	return 0;
}
void copy(char str[], char new[])
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		new[i] = str[i];
}
