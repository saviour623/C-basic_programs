#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
struct datatype {
	char *s = "%s";
	char *d = "%d";
	char *f = "%f";
	char *c = "%c";
} fmt;
int convargs(int argc, char *argv[]);
/** Simple print function **/

int matchcase(char *s, ...){
	int i = 0;
	va_list format;
	va_start(format, *s);
	while (s && s[i++]){
		if (*s == fmt.*s)
			printf("%s", va_arg(format, char*));
		if 
	}
}

int main(int argc, char *argv[]){
	char *str;
	str = "Hello my people";
	return 0;
}
