#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the given number
 *
 * Return: the square root number of n
 */
int _sqrt_recursion(int n)
{
	if (n > 1)
		return (n - 1 * _sqrt_recursion(n - 1));
	else 
		return (-1);
}
