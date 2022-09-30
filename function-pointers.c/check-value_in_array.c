#include <stdio.h>

/* standard library that contain booleans operation */
#include <stdbool.h>

/* define the value 4 to the variable size used throughout the program */

#define size 4
/*function checks value in an array. */

bool check(int array[], int num);

int main(void)
{
	int array[] = {1, 2, 3, 5};
	int value;
	int result;

	printf("Enter value: \n");
	scanf("%d", &value);


	result = check(array, value);
	printf("Result - 1 for TRUE; 0 for FALSE: ");
	printf("%d\n", result);

	return 0;
}

bool check(int array[], int num)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (num == array[i])
			return true;
	}
		return false;
}
