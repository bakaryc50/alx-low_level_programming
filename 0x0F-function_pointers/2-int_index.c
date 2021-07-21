#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array parameter
 * @size: is the size of the array
 * @cmp: the pointer to the fucntion you need to use
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
