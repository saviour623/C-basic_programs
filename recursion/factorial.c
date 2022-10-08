#include <stdio.h>
int factorial(int n);

int main(void){
	printf("Factorial -  Enter any number:\n");
	int fact;
	scanf("%d", &fact);
	printf("%d\n", factorial(fact));
	return 0;
}
int factorial(int n){
	if (n < 0)
		return -1;
	if (n == 0)
		return 1;
	return (n * factorial(n - 1));
}
