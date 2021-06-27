#include <stdio.h>
#include "holberton.h"

/**
 * positive_or_negative - print if the number is positive or negative
 * @i: is a parameter
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
