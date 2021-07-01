#include "holberton.h"

/**
 * _strcmp- compare two strings
 * @dest: first pointer parameter to string
 * @src: second pointer parameter to string
 *
 * Return: 0 if s1 matches s2
 * otherwise an integer less than 0 if s1 is less than s2
 * or an integer greater than 0 if s1 is greater than s2
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (; *s1 && *s2; s1++, s2++)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	if (*s1)
		return (1);
	if (*s2)
		return (-1);

	return (dest);
}
