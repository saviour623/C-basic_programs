#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
void mm(int x, ...);
void ha(int x, va_list);
void mm(int x, ...){
	static int i = 3;
	if (i == 0)
		return;
	va_list ty;
	va_start(ty, x);
	printf("%d\n", va_arg(ty, int));
	va_list xc;
	i--;
	va_copy(xc, ty);
	ha(x, xc);
}
void ha(int x, va_list fg){
	//va_start(fg, x);
	printf("%d\n", va_arg(fg, int));
}
int main(){
	mm(1, 2, 3);
	return 0;
}
