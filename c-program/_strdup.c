#include <stdio.h>
#include <stdlib.h>
//function that returns a pointer to a newly allocated space in memory, which..
//contains a copy of the string given as a parameter.
char *_strdup(char *str);

int main(void)
{
	char *s;

    s = _strdup("ALX SE IS GOOD YEAH");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
char *_strdup(char *str)
{
	int i;
	char *ptr;

	ptr = (char*) malloc(10 * sizeof(str));

	if (str == 0)
	{
		return NULL;
		exit;
	}

	for (i = 0; str[i]; i++)
	{
		ptr[i] = str[i];
	}
	return ptr;
}
