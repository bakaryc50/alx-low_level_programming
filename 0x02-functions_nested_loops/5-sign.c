#include <stdio.h>

/**
 * print_sign - print the sign of a number
 * @n : is parameter
 *
 * Return: On success 1 and prints + if n is greater than zero.
 * Return: On zero 0 and prints 0 if n is zero
 * Return: On -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int r;
	char c;

	if (n > 0)
	{
		r = 1;
		c = '+';
	}
	else if (n == 0)
	{
		r = 0;
		c = '0';
	}
	else if (n < 0)
	{
		r = -1;
		c = '-';
	}
	putchar(c);
	return (r);
}
