#include <stdio.h>

int prime(int n){
	if (n == 0)
		return 0;
	prime(n - 1);
	if (n % 2 != 0)
		printf("%d ", n);
}
int main(){
	int n;
	printf("Enter number\n");
	scanf("%d", &n);
	prime(n);
	return 0;
}
