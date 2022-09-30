#include <stdio.h>

//_strpbrk - function that searches a string for any of a set of bytes.
char *_strpbrk(char *s, char *accept);

int main(void)
{
    char *s = "group of people";
    char *f = "gpps";
    char *t;

    t = _strpbrk(s, f);
    if (t != NULL)
	    printf("%s\n", t);
    return (0);
}

char *_strpbrk(char *s, char *a)
{
	int i,j,k;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (a[j] == s[i])
				return &s[i];
		}
	}
	return NULL;
}
