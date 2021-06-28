#include "holberton.h"

/**
 * _puts - prints a string to the stdout
 * @str: a pointer parameter to a string
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		_putchar(i);
		_putchar(' ');
	}
	_putchar('\n');

}
