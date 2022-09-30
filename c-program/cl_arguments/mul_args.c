#include <stdio.h>

/** program - Takes arguments from the
 * command-line using argv;
 * converts it to integer;
 * multiplies it;
 * print the result;
 * Return: 0 success;
 * Return: 1 if program fails.
 */

int main(int argc, char *argv[])
{
	int i,x,y,k,j,p;
	x = 0;
	y = 0;
	k = 0;
	p = 0;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			if (i == 1)
			{
				for (j = 0; argv[i][j]; j++)
				{
					/**incase of the negative (-) value store in a variable as -1 and will eventually multiply the num4 
*/
					if (argv[i][j] == '-')
						k = -1;
//else statement converts string from the pointer to string array to integer
					else
						x = x * 10 + argv[i][j] - '0';
									}
				//multiplies (-1) with the integer if the special character (-) was found.
				if (k != 0 )
						x = x * k;

			}

			//Same step is repeated for the second array
			if (i == 2)
			{
				for (j = 0; argv[i][j]; j++)
				{
					if (argv[i][j] == '-')
						p = -1;
					else
						y = y * 10 + argv[i][j] - '0';
				}
				if (p != 0)
						y = y * p;
				
			}
		}
		printf("%d\n", x * y);
	}

	else
	{
		printf("Error!!\n");
		return 1;
	}

	return 0;
}
