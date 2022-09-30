#include <stdio.h>

//_strchr - Check for a string
char *_strchr(char *s, char c);

int main(void)
{
	char str[] = "Happy mate";
	char *f;

	f = _strchr(str, 'm');

	if(f != NULL)
		printf("%s\n", f);
}
char *_strchr(char *s, char c)
{
	int i, j;
	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return &s[i];
			break;
		}
	}
	return NULL;
}
