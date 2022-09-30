#include <stdio.h>
int main()
{
	int i, j,k, len = 0;
	char x[] = "we,are happy, for your love and faith we love you";
	int o = 0;
	j = 0;

/** code counts the number of words
 * @len: stores number of words present in string;
 */
	for (i = 0; x[i]; i++)
	{
			if (i == 0){
				if (x[i] >= 97 && x[i] <= 122)
					len++;
			}

			if (!(x[i] >= 97 && x[i] <= 122)){
				if (!(x[i + 1] >= 97 && x[i + 1] <= 122))
				continue;
			}

			if (x[i] >= 97 && x[i] <= 122 && x[i - 1] == ' ')
				len++;
	}
	char b[5] = "  ho";
	if (!(b[i + 1] >= 'a) && !(b[i + 1] <= 122))
		printf("true\n");

	printf("%d\n", len);
	return 0;
}
/**x[i] >= 97 && x[i] <= 122){
   */
