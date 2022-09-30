#include <stdio.h>
#include <stdarg.h>
int print_sm(int x, ...);

int main(void){
	int v;
	v = print_sm(4, 3, 4, 3, 6);
	printf("%d\n", v);
	return 0;
}
int print_sm(int x, ...){
	va_list sum_ex;
	int result = 0;
	int i;

	va_start(sum_ex, x);
	while (x--)
		result += va_arg(sum_ex, int);
	return result;
}
