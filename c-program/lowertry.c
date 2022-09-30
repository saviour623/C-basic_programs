#include <stdio.h>

/* Convert uppercase letters to smaller case */
void lowercs(char string[]);

int main(void)
{
	char string[20] = "HELLO i'M COMING";
	lowercs(string);
	printf("%s\n", string);

	return 0;
}

void lowercs(char string[])
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'A' && string[i] <= 'Z')
		{
			string[i] += ('a' - 'A');
		}
	}
}
