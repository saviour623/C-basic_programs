#include <stdio.h>
int func(int, int);
void fun(int*, int*);
int main (void)
{
	int g, y, m, n;
	g = 6;
	y = 7;
	m = 5;
	n = 8;

	int x = func(g, y);
	printf("%d\n", x);

	fun(&m, &n);
	printf("%d\t %d\n", m, n);
	int i;                                int arr[30];
	int *x = &arr;

        for (i = 0; i < 5; i++)
        {
		*x = *(x + i)
       	return 0;
}
int func(int g, int h)
{
	int v = g + h;
	return v;
}
void fun(int *w, int *n)
{
	int y;
	y = *w;
	*w = *n;
	*n = y;
}
