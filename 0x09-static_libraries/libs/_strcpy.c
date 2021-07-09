#include "holberton.h"

/**
 * _strcpy - copy the string from a pointer to a string
 * @dest: a pointer parameter to a destination
 * @src: a pointer parameter to a source to be copied
 *
 * Return: a pointer character of string copied
 */

char *_strcpy(char *dest, char *src)
{
	if (*src)
		return (src);
	return (dest);
}
