#include "holberton.h"

/**
 * reverse_array - reverse an array of integers
 * @a: a pointer to an interger
 * @n: the number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	for (; --n > 0; ++a, --n)
	{
		*a ^= a[n];
		a[n] ^= *a;
		*a ^= a[n];
	}
}
