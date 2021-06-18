#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - entry point
 * contain an algorithme that print the last digit of a random number
 * Always: return 0 (SUCESS)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ltd = (n % 10);

	if (ltd > 0)
	{
		printf("Last digit of %d is %d and is greater than 5", n, ltd);
	}
	else if (ltd == 0)
	{
		printf("Last digit of %d is %d and is 0", n, ltd);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0 ", n, ltd);
	}
	return (0);
}
