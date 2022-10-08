#include <stdio.h>
//Prototypes
int _strlen(char *s);
int check(char *s, int n, int length);
int pal(char *s);

//checks for palindrome; return 1
int check(char *s, int n, int length){
	if (n == 0)
		return 1;
	if (*s == s[length - 1])
		return check(s + 1, n - 1, length - 2);
	return 0;
}
//return 1 if palindrome else 0
int pal(char *s){
	int length = _strlen(s);
	int n = length/2;
	if (check(s, n, length) == 1)
		return 1;
	return 0;
}
//string length function
int _strlen(char *s){
	if (*s == '\0')
		return 0;
	return 1 + _strlen(s + 1);
}

int main(void){
	char *a = "happah happah";
	if (pal(a) == 1)
		printf("A palindrome\n");
	else
		printf("Not a palindrome\n");
	return 0;
}
