#include "holberton.h"

/**
 * create_array - creates an array of chars, and initialises it with a char
 * @size: the parameter for the size of the array
 * @c: the specific char with whom the array will be initialized
 *
 * Return: NULL if size = 0
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size * sizeof(char));
	if (array != NULL)
	{
		while (size > 0)
			array[--size] = c;
	}
	return (array);
}
