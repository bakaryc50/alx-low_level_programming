#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: a parameter
 *
 * Return: the factorial result of n
 */

int factorial(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	return (n * factorial(n -1));
}
