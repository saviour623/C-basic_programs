#include <stdio.h>

int main(void)
{
	char string[8] = {'S','t','r','i','n','g','s'};

	char string1[] = "Xc5Zze";
	int i;
	for (i = 0; i < 7; i++)
		printf("string[%d] is %c\n", i, string[i]);
	printf("%s\n", string);

	printf("%d\n", sizeof(char));

	printf("%s\n", string1);

	printf("%c\n", string1[1]);

	/* length of string */

	int x = 0;

	for (i = 0; i < 7; i++)
		x++;
	printf("the number of strings are %d\n", x);

	/* copy string */

	char string3[8];

	for (i = 0; i < 7; i++)
		string3[i] = string[i];


	for (i = 0; i < 8; i++)
	{
		printf("string[%d] is : %c\n", i, string3[i]);
	}

	/* Convert string to uppercase */
	char str[80];
	int delt = 'a' - 'A';

	printf("Enter a string less than 80 characters:\n");
        scanf("%s", str);
	i = 0;

	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] -= delt;
		++i;
	}
	printf("The entered string is (in uppercase):\n");
	puts( str );
	return 0;
}
