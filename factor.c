#include <stdio.h>
void fact(int n);
void fact(int n){
	int x = 2;
	if (n % x == 0)
		printf("%d * %d = %d\n", x, n/x, n);
	else {
		x = 3;
		while (x * x <= n){
			if (n % x == 0){
				printf("%d * %d = %d\n", x, n/x, n); break;}
			else x += 2;
		}
	}
}
int main(){
	fact(125886507);
	return 0;
}
