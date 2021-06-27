#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0
 */

void print_times_table(int n)
{
	int times;
	int t;

	for (t = 0; t < n+1; t++)
	{
		for (times = 0; times < n+1; times++)
		{
			if (n > 15 || n < 0)
			{
				;
			}
			else
			{
				if (times == 0)
					;
				else if ((t * times) < 10)
				{
					_putchar(' ');
				}
				else if ((t * times) < 100)
					_putchar('0' + (t * times) / 10);
					_putchar('0' + (t * times) % 10);
				else
					_putchar('0' + (t * times) / 10);
					_putchar('0' + ((t * times) / 10) % 10);
					_putchar('0' + (t * times) % 10);
				if (times < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
