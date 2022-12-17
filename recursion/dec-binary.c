#include <stdio.h>
void convert(int n);

int main(void){
	int n;
	printf("Convert decimal to binary\n");
	printf("Enter decimal number\n");
	scanf("%d", &n);
	convert(n);
	return 0;
}
//convert number to decimal
void convert(int n){
	if (n == 0)
		return;
	else {
		convert(n / 2);
		printf("%d", n % 2);
	}
	if (n
}
