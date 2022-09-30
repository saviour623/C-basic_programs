#include <stdio.h>

char *_strcat(char *str, char *src);

/** _strcat - Write a function that concatenates two strings */

int main(void)
{
	char s1[] = "Concatenate ";
	char s2[] = "This String";

	_strcat(s1, s2);

	printf("%s \n", s1);

	return 0;
}

char  *_strcat(char *str, char *src)
{
	int i,n;

	for (i = 0; str[i] != '\0'; i++);
	for (n = 0; (str[i + n] = src[n]) != '\0'; n++);

	return str;
}
