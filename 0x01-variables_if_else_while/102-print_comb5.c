#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 99; n++)
	{
		for (m = 0; m <= 99; m++)
		{
			if ((n != m) && (n < m))
			{
				putchar(n / 10 + '0');
				putchar(n % 10 + '0');
				putchar(' ');
				putchar(m / 10 + '0');
				putchar(m % 10 + '0');
				if (n == 98 && m == 99)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	printf("\n");
	return (0);
}
