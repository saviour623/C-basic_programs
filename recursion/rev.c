#include <stdio.h>

void rev(char *s){
	if (*s == 0)
		return;
	rev(s + 1);
	putchar(*s);
}

int main(){
	rev("Hello");
	return 0;
}
