#include "holberton.h"

/**
 * _strlen- returns the length of a string
 * @s: a pointer parameter to a string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;
	
	len = 0;
	while (*(s + len))
	{
		len++;
	}

	return (len);
}
