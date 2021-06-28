#include "holberton.h"

/**
 * _strlen- returns the length of a string
 * @s: a pointer parameter to a string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
