#include "holberton.h"
#include <limits.h>

/**
 * print_last_digit - print the last digit of a number
 * @n: is the parameter of the print_last_digit function
 *
 * Return: the value of the last digit
 */

int print_last_digit(long int n)
{
	if (n < 0)
	{
		n = (n * (-1));
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	else if (n >= 0)
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	else if (n == INT_MIN)
	{
		_putchar(INT_MIN % 10 + '0');
		return (INT_MIN % 10);
	}
	return (0);
}

