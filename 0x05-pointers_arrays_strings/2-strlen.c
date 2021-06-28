#include "holberton.h"

/**
 * _strlen- returns the length of a string
 * @s: a pointer parameter to a string
 */
int _strlen(char *s)
{
	int len;
	int i;

	i = 0;
	whil((*(s + i) != '\0'))
	{
		len++;
		i++;
	}

	return (len);
}
