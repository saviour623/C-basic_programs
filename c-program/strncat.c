#include <stdio.h>

char *_strcat(char *str, char *src, int y);

/** _strcat - Write a function that concatenates two strings */

int main(void)
{
	char s1[] = "Concatenate ";
	char s2[] = "This String";
	char *ptr;

	ptr = _strcat(s1, s2, 5);

	printf("%s \n", ptr);

	return 0;
}

char  *_strcat(char *str, char *src, int y)
{
	int i,n;

	for (i = 0; str[i] != '\0'; i++);
	for (n = 0; n < y; n++)
		str[i + n] = src[n];

	str[i + n] = '\0';

	return str;
}
