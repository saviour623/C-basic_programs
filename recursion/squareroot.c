#include <stdio.h>
int root(int n);
int _root(int n, int x);
int root(int n){
	int i = n/2;
	while (i--){
		if (n % i == 0){
			while (i--){
				if (i * i == n){
					return i;
					break;
				}
			}
		}
		
	}
}

int _root(int n, int x){
	if (n == 2)
		return 1;
	if (n % x == 0 && n/x * n/x == n)
		return n/x;
	return _root(n, x--);
}
int main(void){
	printf("%d\n", root(1269));
	printf("%d\n", _root(64, 64/2));
	return 0;
}
