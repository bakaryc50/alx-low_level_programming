#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first parameter
 *
 * Return: the sum, else 0 if fails
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	int some;

	some = 0;
	i = n;
	va_start(vl, n);
	while (i--)
	{
		some += va_arg(vl, int);
	}
	va_end(vl);

	return (some);

}
