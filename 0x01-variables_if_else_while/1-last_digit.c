#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - entry point
 * Always: return 0 (SUCESS)
 */

/* the function main contain an algorithm that print the last digit of a random number and control its output */
int main(void)
{
	int n, ltd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ltd = (n % 10);
	if (ltd > 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ltd);
	}
	else if (ltd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ltd);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ltd);
	}
	return (0);
}
