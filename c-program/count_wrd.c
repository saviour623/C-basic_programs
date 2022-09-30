#include <stdio.h>
/** cap -> capitalizes first letter of a word
 * @str: string parameter
 *@spc: special characters
 *Return: pointer to string
 */

int cap(char *str);

int main(void)
{
	char str[] = "hello i am a boy. i love rice, bread; toasted and baked(yummy!).";
	char str1[] = "hello boy";
	int ptr;

	ptr = cap(str);

	printf("%d\n", ptr);

	return 0;
}


int cap(char *str)
{
	char spc[] = {' ', ';',':', ',', '.', '!',
		'"', '?', '{','}','(',')', '\n', '\t'};

	int i, j, k, c;

	c = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				c = c + 1;
		}

		else
		{
			for (j = 0; spc[j]; j++)
			{
				if (str[i - 1] == spc[j])
				{
					if (str[i] >= 'a' && str[i] <= 'z')
						c++;
				}
			}
		}
	}



	return c;
}
