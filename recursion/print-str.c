#include <stdio.h>
/** Program that uses recursion to print array of strings. */
void _puts_recursion(char *s);
int main()
{
	_puts_recursion("hi i am coming");
	return 0;
}

void _puts_recursion(char *s){
	if (*s == '\0'){
		printf("\n");
		return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}
