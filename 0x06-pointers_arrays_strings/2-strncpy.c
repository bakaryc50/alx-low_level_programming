#include "holberton.h"

/**
 * _strncpy - concatenates two strings
 * @dest: first pointer parameter to string
 * @src: second pointer parameter to string
 * @n: a parameter for n bytes
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_end = dest;
	int src_len = 0;

	while (src_len < n && src[src_len])
		++src_len;

	if (src + src_len < dest || dest_end + n < src)
	{
		for (; src_len; --src_len, --n)
			*dest_end++ = *src++;
		for (; n; --n)
			*dest_end++ = '\0';
	}

	return (dest);
}
