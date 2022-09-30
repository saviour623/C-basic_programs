#include <stdio.h>

int main(int argc, char *argv[])
{
	int x = 0;

	x = x * 10 + argv[0][0] - 48;
	printf("%c\n %d\n", argv[0][0], x);

	return 0;
}
