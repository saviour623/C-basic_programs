#include <stdio.h>

int main(void)
{
	int score[5] = {60, 40, 30, 45, 54};
	int t, total;
	int average;

	total = 0;

	for (t = 0; t < 5; t++)
	{
		printf("\n Your score is %d \n \n ", score[t]);
		total += score[t];
	}
	printf("Your total score is %d\n", total);

	average = (total / 5);

	printf("Your average score for five subjects is %d\n", average);

	return 0;
}
