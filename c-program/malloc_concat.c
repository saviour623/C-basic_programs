#include <stdio.h>
#include <stdlib.h>
/** Function to concatenate two strings and save to a newly allocated space in memory. */

char *str_concat(char *s1, char *s2);

int main(void)
{
    char *s;

    s = str_concat("Big Man How are you? ", "Im fine");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;
	ptr = (char*) malloc(10 * sizeof(s1,s2));

	if (s2 == NULL)
	{
		return NULL;
		exit;
	}
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j]; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return ptr;
}
