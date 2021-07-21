#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: a string parameter
 * @f: is the function pointer to call to print the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	(f)(name);
}
