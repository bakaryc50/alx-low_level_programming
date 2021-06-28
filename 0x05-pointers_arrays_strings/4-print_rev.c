#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: a pointer parameter to a string
 */
void print_rev(char *s)
{
	char *t;

	t = s;
	while (*t)
		++t;
	while (s < t--)
		_putchar(*t);

	_putchar('\n');

}
