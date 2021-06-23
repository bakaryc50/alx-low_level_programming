#include "holberton.h"

/**
 * _abs - print the absolute value of an integer
 * @n - parameter
 *
 * Return: a result of the absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}

	return (0);
}

