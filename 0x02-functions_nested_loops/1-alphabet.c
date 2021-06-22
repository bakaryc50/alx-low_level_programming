#include <stdio.h>
#include "_putchar.c"

/**
 * _1-alphabet - print the alphabet in lower case
 * 
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		-putchar(i);
	}
	_putchar('\n');
}
