#include <stdio.h>
int add(int x, int y);

int main(void)
{
	int i = 8;

	printf("%d\n", i);

	{
		int i = 7;
		printf("%d\n", i);
	}

	int x, y;

	i = add(x, y);
	for (x = 0, y = 5; x < 5; x++, y--)
	{
		i = add(x, y);
		printf("%d\n", i);
	}

	/* static variables main it's value even after the program is exited */
        static int k = 0;
	static int p = 0;

	for (i = 0; i < 5; i++)
	{
		printf("%d and %d\n", k++, p++);
	}

	/* Variable cannot be changed using const */

	const int e = 3;
	//e.g e = 5; cannot be reassigned to the variable "e" because it was earlier defined with a constant (read only). 

	printf("%d", e);
	return 0;
}



int add(int x, int y)
{
	static int counter = 1;

	printf("The counter is set to %d\n", counter++);

	return x + y;
}
