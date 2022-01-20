#include "search_algos.h"

#define VALUE_CHECKED(array, index) \
	printf("Value checked array[%lu] = [%d]\n", index, array[index])

/**
 * linear_search - searchs for a value in an array of integers
 * using the linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 * if value is not present in array or if array is NULL, return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			VALUE_CHECKED(array, i);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
