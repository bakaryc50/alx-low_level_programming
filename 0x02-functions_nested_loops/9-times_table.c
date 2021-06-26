#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int times;
	int n;
	int r;

	for (n = 0; n < 10; n++)
	{
		for (times = 0; times < 10; times++)
		{
			r = n * times;
			if (r < 10)
			{		
				if (times < 3)
				{
					_putchar(r + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(r + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
