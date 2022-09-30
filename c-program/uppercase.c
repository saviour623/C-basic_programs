#include <stdio.h>

char *uppercs(char string[]);

int main(void)
{
	char string[10] = "Hello";
	char *v;

	v = uppercs(string);
	printf("%s\n", string);

	return 0;
}

char *uppercs(char string[])
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] -= ('a' - 'A');
		}
	}

	return string;
}
