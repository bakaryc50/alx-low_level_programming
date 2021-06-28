#include "holberton.h"
#include <stdlib.h>

/**
 * swap_int - swaps the values of two integers
 * @a: first pointer parameter to an int
 * @b: second pointer parameter to an int
 */
void swap_int(int *a, int *b)
{
	int *tmp;

	*tmp = malloc(sizeof(a));
	*tmp = *a;
	*a = *b;
	*b = *tmp;
}
