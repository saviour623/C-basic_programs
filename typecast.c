#include <stdio.h>

int main(void)
{
	int x;
	x = 97456;
	char *p = (char *)&x;

	printf("%s\n", (char *)&x);
	printf("%d\n", *p);
	return 0;
}
