#include <stdio.h>

int main(void)
{
	int y[] = {2,4,6};
	int i = 0;

	while (y[i])
	{
		if (i < 3)
		{
			printf("%d\n", y[i]);
		}
		i++;
	}
	return 0;
}
