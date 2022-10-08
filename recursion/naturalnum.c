#include <stdio.h>
int natural_num(int n){
	if (n == 0)
		return 1;
	natural_num(n - 1);
	printf("%d", n);
	if (n != 100)
		printf(", ");
	else
		printf("\n");
}
int main(void){
	int (*p)(int) = natural_num;
	p(100);
	return 0;
}
