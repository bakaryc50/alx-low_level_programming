#include "holberton.h"

/**
 * _atoi- converts a string to an integer
 * @s: a pointer parameter to a string
 * Return: the string of integer converted
 */
int _atoi(char *s)
{
	int len;
	char n;

	len = 0;
	while (*(s + len))
	{
		if (*(s + len) >= '0' && *(s + len) <= '9')
			n = (*(s + len));
		len++;
	}

	return (n + '0');
}
