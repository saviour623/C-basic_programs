#include <stdio.h>
int _strcmp(char *s, char *p);

int main(void){
	char *s = "Hello";
	char *p = "Hello";
	if (_strcmp(s, p) == 1)
		printf("Alike\n");
	else
		printf("Not alike\n");
	return 0;
}

int _strcmp(char *s, char *p){
	if (*s == '\0' && *p == '\0')
		return 1;
	if (*s == *p)
		return _strcmp(s + 1, p + 1);
	return 0;
}
