#include <stdio.h>

/**
 * print_sign - print the sign of a number
 * @n : is parameter
 *
 * Return: On success 1 and prints + if n is greater than zero.
 * On zero 0 and prints 0 if n is zero
 * On -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	return (0);
}

