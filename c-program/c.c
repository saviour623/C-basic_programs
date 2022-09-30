#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 1;

	if (a == b)
		printf("yes\n");
	else if(b == c)
	{
		printf("yep\n");
		c++;
	}
	else if(d == b)
	{
		printf("yea\n");
		d++;
	}
	else if(d == a)
		printf("perfect\n");
	return 0;
}
