#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int times;
	int n;
	int r;

	for (n = 0; n <= 9; n++)
	{
		for (times = 0; times <= 9; times++)
		{
			r = n * times;
			if (r <= 9 )
			{
				if (times == 9)
				{
					continue;
				}
				_putchar(r + '0');
				_putchar(',');
				_putchar(' ');
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
