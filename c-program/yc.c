#include <stdio.h>
#include <stdlib.h>
/** main: program that divides string to words
 * @x: array of strings
 * stores print words.
 * Return: 0
 */
int main()
{
	int i, j,k, len = 0;
	char x[] = "we are happy for your love and faith. we love you";
	int o = 0;
	j = 0;
/** code counts the number of words
 * @len: stores number of words present in string;
 */
	for (i = 0; x[i]; i++)
	{
		for (
		if (i == 0){
			if (x[i] != ' ')
				len++;
		}
		if (x[i] == ' ' && x[i + 1] == ' ')
			continue;

		if (x[i] != ' ' && x[i - 1] == ' ')
			len++;
	}

//Memory allocation to store each strings
	char **p = (char**)malloc(len * sizeof(char*));
        if (p == NULL)
        {
                exit;
	}

        for (k = 0; k < len; k++)
                p[k] = (char*)malloc(10  * sizeof(char));


/** Code that divides strings to words when encountered space.
 * this code is library function free
 * @x: string to be shared
 * @p: memory location
 * @o: rows of malloc. increases by 1
after code runs
*/

/** logic: if i is 0 and and first character is a string copy char -
 * from x[i] till space encountered. increase row number.
 * if x[i] is space and the next char is space, skip;
 * if x[i] is not space and the previous char is space x[i] is a start of a new
 * copy(repeat first process) else skip.
 */
	for (i = 0; x[i]; i++)
	{
		if (i == 0){
			if (x[i] != ' '){
				j = 0;
				for (; x[i]; i++){
					if (x[i] != ' '){
						p[o][j] = x[i];
						j++;
					}
					else break;

				}				o++;
			}
		}

		if (x[i] == ' ' && x[i + 1] == ' ')
			continue;

		if (x[i] != ' ' && x[i - 1] == ' '){
		        j = 0;
			for (; x[i]; i++)
			{
				if (x[i] != ' '){
					p[o][j] = x[i];
					j++;
				}
				else break;
			}
			o++;
		}
	}

	for (i = 0; i < len; i++)
		printf("%s\n", p[i]);

	for (i = 0; i < len; i++)
		free(p[i]);
	free(p);

	return 0;
}
