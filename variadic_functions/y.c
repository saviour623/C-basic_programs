#include <stdio.h>
#include <stdarg.h>

void a(char *s, ...){
	va_list p;
	va_start(p, *s);
	switch(*s){
	case 'c':
		printf("%s\n", va_arg(p, char*));
		break;
	default:
		printf("No\n");
	}
}

int main(){
	a("c", "yes", "no");
	return 0;
}
