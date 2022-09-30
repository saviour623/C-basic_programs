#include <stdio.h>

//function that executes a function given as a parameter on each element of an array.

void array_iterator(int *array, size_t size, void (*action)(int));

void print_elem(int elem)
{
    printf("%d\n", elem);
}

void array_iterator(int *array, size_t size, void (*action)(int)){
	int i;
	for (i = 0; i < size; i++)
		action(array[i]);
}

int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, print_elem);
    return (0);
}
