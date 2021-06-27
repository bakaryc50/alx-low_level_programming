#include "holberton.h"

/**
 * print_sum_multiple_35 - print the sum of all the multiples of 3 or 5 below 1024
 */
void print_sum_multiple_35(void)
{
	int sum;
	int i;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	printf("\n");
}
