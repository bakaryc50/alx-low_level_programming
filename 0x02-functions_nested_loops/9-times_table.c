#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int times;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (times = 0; times < 10; times++)
		{
			if (times == 0)
				;
			else if ((n * times) < 10)
				_putchar(' ');
			else
				_putchar('0' + (n * times) / 10);
			_putchar('0' + (n * times) % 10);
			if (times < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
