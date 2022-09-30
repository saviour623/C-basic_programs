#include <stdio.h>
#include <stdlib.h>

/** function that concatenates all the arguments of your program
 * Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 * Each argument is followed by a \n in the new string
 */
char *argstostr(int ac, char **av);

int main(void)
{
	char *p[3] = {"hello", "Ho", "happy"};
	argstostr(3, p);
	return 0;
}

char *argstostr(int ac, char **av)
{
	char *ptr;

	ptr = (char*) malloc(98 * sizeof(char));

	int j,i;

	for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
				ptr[i] = av[i][j];
		}
	printf("%s\n", ptr);
}
