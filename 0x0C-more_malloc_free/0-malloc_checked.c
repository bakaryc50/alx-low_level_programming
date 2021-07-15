#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the memory size to allocate
 * Description: if malloc fails, the checker function should cause normal exit
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer != null)
		return (pointer);
	exit(98);

}
