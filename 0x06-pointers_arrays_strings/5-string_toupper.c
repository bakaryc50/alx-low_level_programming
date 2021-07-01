#include "holberton.h"

/**
 * string_toupper- changes all lowercase letters of a string to uppercase
 * @s:
 *
 * Return: every caracter converted
 */
char *string_toupper(char *s)
{
	char *scopy;

	for (scopy = s ; *scopy; ++scopy)
	{
		if ('a' <= *scopy && *scopy <= 'z')
			*scopy = *scopy - ('a' - 'A');
	}

	return (s);
}
