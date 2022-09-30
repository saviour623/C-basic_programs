#include <stdio.h>

int main(void)
{
	char x = 'a';
	int y;

	y = 0;
	y = y * 10 + '1' - '0';
	printf("%d\n", y);

	return 0;
}
