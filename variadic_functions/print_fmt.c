#include <stdio.h>
#include <stdarg.h>

/** @print_all - print from variable list in order of their format of datatype
 * main - Entry point
 */
void print_all(const char * const format, ...);

int main(void){
	print_all("ceis", 'B', 3, "stSchool");
	return (0);
}

void print_all(const char * const format, ...){
	va_list prnt;
	char *str;
	char *s;
	s = ", ";
	char k = 0, i = 0, p = 0;
	va_start(prnt, *format);
	while (format && format[i]){
		p++;
		i++;
	}
	while (format && format[k]){
		if (!(--p))
			s = "\n";
		switch(format[k]){
		case 'c':
			printf("%c%s", va_arg(prnt, int), s);
			break;
		case 'i':
			printf("%d%s", va_arg(prnt, int), s);
			break;
		case 'f':
			printf("%f%s", va_arg(prnt, double), s);
			break;
		case 's':
			str = va_arg(prnt, char*);
			if (str == NULL)
				printf("Error string! -NO STRING\n");
			else printf("%s%s", str, s);
			break;
		}
		k++;
	}
}
