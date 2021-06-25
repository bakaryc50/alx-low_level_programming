#include "holberton.h"

/**
 * jack_bauer - print 
 * @n: is the parameter of the print_last_digit function
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
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
		_putchar((((-8) * (-1)) % 10) + '0');
		return (8 % 10);
	}
	return (0);
}

