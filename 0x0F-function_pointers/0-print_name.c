#include "function_pointers.h"

/**
 * print - that just print a string
 * @n: as a string
 */
void print(char *n)
{
	int i;
	
	i = 0;
	while (n[i])
	{
		_putchar(n[i]);
	}
	_putchar('\n');
}
/**
 * print_name - a function that prints a name
 * @name: a string parameter
 */

void print_name(char *name, void (*f)(char *))
{
	f = print;
	(f)(name);
}
