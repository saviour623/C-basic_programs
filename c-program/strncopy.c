#include <stdio.h>

char *_strncpy(char *dest, char *src, int n);

int main(void)
{
	char str[] = "Hi there owl";
	char str1[] = "I am a footballer";
	char *ptr;

	ptr = _strncpy(str, str1, 8);

	printf("%s\n", ptr);

	return 0;
}

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return dest;
}
