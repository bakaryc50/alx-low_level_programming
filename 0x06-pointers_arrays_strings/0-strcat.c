#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: first pointer parameter to string
 * @src: second pointer parameter to string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	*dest = dest + src;
	return (*dest);
}
