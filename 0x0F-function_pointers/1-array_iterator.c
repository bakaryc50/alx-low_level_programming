#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter on each element
 * @array: an array parameter
 * @size: is the size of the array
 * @action: the pointer to the fucntion you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (action && array)
	{
		while (size--)
		{
			action(*array++);
		}
	}
}
