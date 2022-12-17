#include <stdio.h>
#include <unistd.h>
#define printf_dec_format(x) _Generic((x), \
    char: "%c", \
    signed char: "%hhd", \
    unsigned char: "%hhu", \
    signed short: "%hd", \
    unsigned short: "%hu", \
    signed int: "%d", \
    unsigned int: "%u", \
    long int: "%ld", \
    unsigned long int: "%lu", \
    long long int: "%lld", \
    unsigned long long int: "%llu", \
    float: "%f", \
    double: "%f", \
    long double: "%Lf", \
    char *: "%s", \
    void *: "%p")

#define print(x) printf(printf_dec_format(x), x)
#define printnl(x) printf(printf_dec_format(x), x), printf("\n");

int main(void){
	__label__ brk;
	long i = 2;
//	double x = 2.6;
	float y = 2.6;
	long double z = 2.6;
	char *s;
	void *doubleVar;
	if (__builtin_types_compatible_p(typeof(doubleVar), void *)) {
		printf("doubleVar is of type double!\n");
	}
	unsigned int p = 16556646;
	int g = __builtin_popcount(p);
	printf("%d\n", (int)__builtin_return_address(0));
//	s = __func__;
	printf("%s\n", __func__);
	//printf("%s\n", typeof(x));
	printf("%d\n", g);
	//printf("%d\n", sizeof(x));
	//printf("%d\n", sizeof(z));

	int x = 5;
	while (x < 7){
		if (x == 6)
			goto brk;
		else x = 5;
		x++;
	}
brk:
	x = 6;
	printf("\n%d\n", x);

	switch ('Z'){
	case 'A' ... 'Z':
		printf("True\n");
		break;
	case 'a' ... 'z':
		printf("No\n");
		break;
	}
	return 0;
}
