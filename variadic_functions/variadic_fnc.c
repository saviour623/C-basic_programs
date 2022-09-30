#include <stdio.h>
#include <stdarg.h>
int sum(int x, ...);
int main(){
	int y;
	y = sum(3, 4, 5, 6, 7);
	printf("%d\n", y);
	return 0;
}
int sum(int x, ...){
	va_list list;
	va_start(list, x);

	for (int i = 0; i < 4; i++)
		x += va_arg(list, int);
	return x;
}
