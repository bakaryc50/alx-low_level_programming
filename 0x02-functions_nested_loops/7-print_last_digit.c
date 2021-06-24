#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: is the parameter of the print_last_digit function
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
	return (n % 10);
}

