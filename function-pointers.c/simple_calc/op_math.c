#include "sum.h"

/** @op_symb: operation function.
 * returns a FP that recieves two data type int and returns an int.
 * @p: pointer to symbol from main.
 * function loops through array of struct.
 * compares @m from struct with @p.
 * Return: pointer if @m of array at @i == @p & NULL if unsuccessful.
 */
int (*op_symb(char *p))(int, int)
{
	int i;
	store pr[] = {
		{"+", add},
		{"-", sub},
		{"*", mul},
		{"/", divd},
		{"%", mod},
		{"^", powr}
	};

	i = 0;
	while (i < 7){
		if (*p == *(pr[i].m))
			return pr[i].res;
		i++;
	}
	return NULL;
}

/** main - Entry point
 * @argc,@argv: command line arguments
 * @i: loop count
 * @j,@k: stores value from atoi
 * Return 0: Success
 */
int main(int argc, char *argv[])
{
	int i,j,k;
	int result;
	int (*f)(int, int);//function pointer declaration.

	if (argc != 4){
		printf("Math Error");
		printf("\n");
		exit(98);
	}
	if (argv[1] == NULL)
		exit(99);
	if (argv[3] == NULL)
		exit(100);
	i = 0;
	j = 0;

/** inbuilt Atoi function - converts char to int */
	while (argv[1][i]){
		j = j * 10 + argv[1][i] - '0';
		i++;
	}
	i = 0;
	k = 0;
	while (argv[3][i]){
		k = (k * 10) + (argv[3][i] - '0');
		i++;
	}

	/**@f: function pointer that points to the returned function pointer.*/
	f = op_symb(argv[2]);

	/**@result: stores value returned from function pointer f */
	result = f(j, k);

	printf("%d\n", result);
	return 0;
}
