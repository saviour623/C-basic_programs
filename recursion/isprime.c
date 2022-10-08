#include <stdio.h>
int primecheck(int n, int i);
//checks is number is a prime number
int isprime(int n){
	if (n < 2)
		return 0;
	if (n == 2)
		return 1;
	if (primecheck(n, n - 1))
		return 1;
	return 0;
}
int main(){
	if (isprime(89))
		printf("Prime number\n");
	else
		printf("Not prime number\n");
	return 0;
}
int primecheck(int n, int i){
	if (i == 1)
		return 1;
	if (!(n % i))
		return 0;
	if (n % i != 0)
		return primecheck(n, i - 1);
}
