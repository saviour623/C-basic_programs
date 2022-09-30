#include <stdio.h>
/* Change lowercase to uppercase */

void uppercs(char string[]);

int main(void)
{
	char string[20] = "computerize";

	uppercs(string);

	printf("%s\n", string);

	return 0;
}

void uppercs(char string[])
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] -= ('a' - 'A');

/**
 * 'a' - 'A': Every letter according ACII gets its other form by addition or subtraction of 32, i.e, 'a' - 'A' = 97 - 65, which is = 32; So What ever number e.g C ± 32 gives c and C. 
 **/
		}
	}

}
