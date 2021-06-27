#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0
 */

void print_times_table(int n)
{
	int times;
	int t;
	int n;

	for (t = 0; t < n; t++)
	{
		for (times = 0; times < n; times++)
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
					_putchar(' ');
				else
					_putchar('0' + (t * times) / 10);
				_putchar('0' + (t * times) % 10);
				if (times < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
