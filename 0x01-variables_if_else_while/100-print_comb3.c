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

	for (n = 0; n < 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			if ((n != m) && (n < m))
			{
				putchar(n % 10 + '0');
				putchar(m % 10 + '0');
				putchar(',');
				putchar(' ');

			}

		}
	}
	printf("\n");
	return (0);
}
