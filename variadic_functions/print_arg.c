#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
void print_num(const char *seperator, const unsigned int n, ...);

void print_str(const char *seperator, const unsigned int n, ...);

int main(void){
	print_num(",", 4, 4, 7, 6, 3);
	print_str(",", 4, "Hi", "how", "are", "you");
	return 0;
}
void print_num(const char *seperator, const unsigned int n, ...){
	va_list args;
	if (n == 0)
		exit(0);
	int i = n;
	va_start(args, n);
	while (i--){
		int k = i;
		printf("%d", va_arg(args, int));
		if (seperator == NULL)
			continue;
		if (k--)
			printf("%s ", seperator);
	}
	printf("\n");
}
void print_str(const char *seperator, const unsigned int n, ...){
	va_list ex_str;
	int i;
	va_start(ex_str, n);

	int k = 1;
	i = 0;
	while (i < n){
		printf("%s", va_arg(ex_str, char*));
		if (k != n)
			printf("%s ", seperator);
		k++;
		i++;
	}
	printf("\n");
}
