#include <stdio.h>

void change(int *i)
{
	*i = 4;
}

int multiply(int x, int y)
{return x * y;}

int add(int x, int y)
{return x + y;}

int subtr(int x, int y)
{return x - y;}

int div(int x, int y)
{return x / y;}

/* function that returns a function ppinter */
int (*return1())(int, int)
{
	int i;
	printf("enter 1 for addition\n 2 for subtraction\n 3 for division\n");
	scanf("%d", i);

	if (i == 1)
		return add;
	else
	{
		if (i == 2)
			return subtr;
		else
			if (i == 3)
				return div;
	}
}

int main(void)
{
	int i = 7;
	int x, y;
	x = 6;
	y = 6;

	void (*function)(int*);
	function = &change;

	(*function)(&i);

	int (*fmultiply)(int, int);
	fmultiply = &multiply;

	int m = fmultiply(x,y);
	int n = (*fmultiply)(x,y);

	printf("%d, %d, %d\n", i, m, n);
	/*array of function pointers */
	int (*math[])(int, int) = {add, subtr, div};

	int f,g,h;
	f = math[0](x,y);
	g = math[1](x,y);
	h = math[2](x,y);

	printf("%d, %d, %d\n", f, g, h);

	/* function of function to pointers */
	int (*returnf())(int, int) = &return1();
	int k  = (*returnf())(x,y);

	printf("%d\n", k);

	return 0;
}
