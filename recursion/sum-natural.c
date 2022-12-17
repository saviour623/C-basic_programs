#include <stdio.h>
#include <stdlib.h>
int _sumN(int n);
//main - sum of all natural numbers from CLI

//_sumN returns sum of N numbers
int _sumN(int n){
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return n + _sumN(n - 1);
}

int main(int argc, char *argv[]){
	if (argc != 2)
		exit(0);
	/** Atoi Function **/
	int conv = 0;
	for (int i = 0; argv[1][i]; i++){
		conv = (conv * 10) + (argv[1][i] - '0');
	}
	if (_sumN(conv))
		printf("%d\n", _sumN(conv));
	else printf("Number is 0 - Natural Numbers only!!\n");
	return 0;
}
