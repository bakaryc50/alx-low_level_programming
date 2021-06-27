#include "holberton.h"
#include <stdio.h>

/**
 * print_to__98 - print all natural number from n to 98
 * @n: is the parameter to be passed
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else if(n == 98)
	{
		printf("%d", n);
	}
	else
	{
		for (i = n; >= 98; i--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
}

