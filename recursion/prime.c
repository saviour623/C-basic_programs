#include <stdio.h>
//checks is number is a prime number
int primecheck(int n, int i);
//prints prime numbers
int prime_num(int n){
	if (n < 2)
		return 0;
	if (n == 2){
		printf("%d\n", n);
		return 1;
	}
	if (primecheck(n, n - 1))
		printf("%d ", n);
	prime_num(n - 1);
}
int main(){
	printf("Hello i print all prime numbers within 1 - 100\n");
	prime_num(100);
	return 0;
}
/** Divides by @i untill i = 1
    if remainder is 0, number is divisible and not a prime number..
    @n: Entry number(input).
    Return 0: Not prime.
    Return 1: Prime number.
**/
int primecheck(int n, int i){
	if (i == 1)
		return 1;
	if (!(n % i))
		return 0;
	if (n % i != 0)
		return primecheck(n, i - 1);
}
