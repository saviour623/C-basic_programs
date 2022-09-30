#include <stdio.h>

int main(void)
{
	int i, j;
	char str1[] = "fffff";
	char str2[] = "ffffe";

	for (i = 0; str1[i] != '\0'; i++)
	{
		for (j = 0; str2[j] != '\0'; j++)
		{
			if (str1[i] != str2[j])
			{
				printf("yes\n");
				break;
			}
		}
		break;
	}

	return 0;
}
