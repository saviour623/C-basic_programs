#include <stdio.h>
void let_m(int n){
	int i, j, k;
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if (j == 0 || j == 5 && i == 0)
				printf("*");
		}
	}
}

int main(void){
	printf("Enter size for shape\n");
	int n;
	//scanf("%d", &n);
	n = 5;
	let_m(n);
	return 0;
}
