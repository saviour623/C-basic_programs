#ifndef SUM_H
#define SUM_H
#include <stdio.h>
#include <stdlib.h>

int (*op_symb(char *p))(int, int);

struct ptr{
	char *m;
	int (*res)(int, int);
};
typedef struct ptr store;

int add(int a, int b){
	return a + b;
}
int sub(int a, int b){
	return a - b;
}
int mul(int a, int b){
	return( a * b);
}
int divd(int a, int b){
	if (!(b))
		printf("Math Error!!\n");
	return a/b;
}
int mod(int a, int b){
	if (!(b))
		printf("Math Error!!\n");
	return a % b;
}

int powr(int a, int b){
	int i,k;

	if (b == 0)
		return 1;
	if (b == 1)
		return a;
	if (a == 1)
		return a;
	if (a == 0)
		return 0;
	if (a > 1 && b > 1){
		k = a;
		for (i = 1; i < b; i++)
			k *= a;
		return k;
	}
	printf("No negative power or fraction\n");
	return (98);
}
#endif
