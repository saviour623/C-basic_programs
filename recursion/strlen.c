#include <stdio.h>
//funtion that returns length of str
int _strlen(char *s);
int main(){
	int (*p)(char*) = _strlen;
	printf("%d\n", p("Hello"));
	return 0;
}
int _strlen(char *s){
	if (*s == '\0')
		return 0;
	return 1 +  _strlen(s + 1);
}
