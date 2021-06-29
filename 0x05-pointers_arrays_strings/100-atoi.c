#include "holberton.h"

/**
 * _atoi- converts a string to an integer
 * @s: a pointer parameter to a string
 * Return: the string of integer converted
 */
int _atoi(char *s)
{
	int len;
	int i;
	char n;

	len = 0;
	while (*(s + len))
	{
		for (i = 0; i <= 9; i++)
			if (*(s + len) == i)
				n = i;
		len++;
	}

	return (n);
}
