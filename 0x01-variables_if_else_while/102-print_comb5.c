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
				if (n < 10 && m < 10)
				{
					putchar('0');
					putchar(n % 10 + '0');
					putchar(' ');
					putchar('0');
					putchar(m % 10 + '0');

				}
				else
				{
					putchar(n / 10 + '0');
					putchar(n % 10 + '0');
				}
			}

		}
	}
	printf("\n");
	return (0);
}
