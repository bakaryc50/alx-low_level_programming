#include "holberton.h"
#include "_putchar.c"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	
	_putchar('H');
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'o' || c == 'l' || c == 'b' || c == 'e' || c == 'r' || c == 't')
		{
			_putchar(c);
		}
	}
	for ( c = 'o'; c >= 'n'; c++)
	{
		if (c == 'o' || c == 'n')
			_putchar(c);
	}
	
	
	return (0);
}
