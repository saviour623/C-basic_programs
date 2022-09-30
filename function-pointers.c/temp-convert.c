#include "temp.h"
/**
 * @temp_operation: a function that returns a pointer to a function.
 * The pointer to a function takes in a float data type and return a float.
 */
float (*temp_operation())(float){
	printf("Enter F: cel-fahr\n");
	printf("Enter C: fahr-cel\n");
	printf("Enter K: cel-kelv\n");
	printf("Enter X: fahr-kelv\n");
	printf("Enter R: kelv-cel\n");
	printf("Enter V: kelv-fahr\n");
	char x;
	scanf("%c", &x);
	if (x == 'F')
		return c_fahren;
	else if (x == 'C')
		return f_celcuis;
	else if (x == 'K')
		return c_kelvin;
	else if (x == 'X')
		return f_kelvin;
	else if (x == 'R')
		return k_celcius;
	else if (x == 'V')
		return k_fahren;
	else printf("Error! Invalid input.\n");
	return NULL;
}

/** main - Entry point.
 * @n: Takes in value of returned float.
 * @ptr: function pointer.
 * Return 0: SUCCESS
 */
int main()
{
	float n,p;
	float (*ptr)(float) = temp_operation();
	printf("Enter temperature value:\n");
	scanf("%f", &p);
	if (ptr != NULL){
		n = ptr(p);
		printf("%f\n", n);
	}
	return 0;
}
