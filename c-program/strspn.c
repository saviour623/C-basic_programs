#include <stdio.h>

//finds length of a prefixed string
unsigned int _strspn(char *s, char *a);

int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;


    n = _strspn(s, f);
    printf("%d\n", n);

    return (0);
}

unsigned int _strspn(char *s, char *a)
{
	int i,j;
	int count;

	count = 0;
	j = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (a[j] == s[i])
				count++;
		}
	}
	return count;
}
