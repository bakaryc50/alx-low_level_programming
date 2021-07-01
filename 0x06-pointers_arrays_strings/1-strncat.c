#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: first pointer parameter to string
 * @src: second pointer parameter to string
 * @n: a parameter for n bytes
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;
	int src_len = 0;

	while (*dest_end)
		++dest_end;

	while (str_len < n && src[src_len])
		++src_len;

	if (src + src_len < dest || dest_end + src_len < src)
	{
		while (src_len--)
			*dest_end++ = *src++;
		*dest_end = '\0';
	}

	return (dest);
}
