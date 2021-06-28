#include "holberton.h"

/**
 * _strlen- returns the length of a string
 * @s: a pointer parameter to a string
 */
int _strlen(int *s)
{
	int len;
	int i;

	i = 0;
	while(*(s + i) != '\0')
	{
		len++;
	}

	return (len);
}
