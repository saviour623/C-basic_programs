#include <stdio.h>
int powr(int base, int p){
	if (p < 0)
		return -1;
	if (p == 0)
		return 1;
	return base * powr(base, p - 1);
}
int main(){
	printf("%d\n", powr(2, 5));
	return 0;
}
