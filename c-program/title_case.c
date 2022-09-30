#include <stdio.h>

/** cap -> capitalizes first letter of a word
 * @str: string parameter
 *@spc: special characters
 *Return: pointer to string
 */

char *cap(char *str);

int main(void)
{
	char str[] = "hello i am a boy. i love rice, bread; toasted and baked(yummy!).";

	char *ptr;

	ptr = cap(str);

	printf("%s\n", ptr);

	return 0;
}


char *cap(char *str)
{
	char spc[] = {' ', ';',':', ',', '.', '!',
		'"', '?', '{','}','(',')', '\n', '\t'};

	int i, j, k;
	j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}

		else
		{
			for (j = 0; spc[j]; j++)
			{
				if (str[i - 1] == spc[j])
				{
					if (str[i] >= 'a' && str[i] <= 'z')
						str[i] = str[i] - 32;
				}
			}
		}
	}



	return str;
}
