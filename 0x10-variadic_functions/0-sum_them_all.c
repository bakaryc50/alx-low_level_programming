#include "variadic_function.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first parameter
 *
 * Return: the sum, else 0 if fails
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	int i;
	int some;

	if (n == 0)
		return (0);
	va_start(vl, n);
	for (i = n; i >= 0; i = va_arg(vl, int))
	{
		some += i;
	}
	return (some);

}
