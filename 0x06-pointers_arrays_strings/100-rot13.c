#include "holberton.h"

/**
 * rot13 - encode a string using rot13
 * @s: the string to encode
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	char *c;
	char lettershift;

	for (c = s; *c; ++c)
	{
		lettershift = 'A' + (*c & 32);
		if (('a' <= *c && *c <= 'z') || ('A' <= *c && *c <= 'Z'))
			*c = (*c - lettershift + 13) % 26 + lettershift;
	}

	return (s);
}
