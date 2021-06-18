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

	n = 0;
	m = 0;
	while (n < 9)
	{
		while (m <= 9)
		{
			if ((n != m) && (n < m))
			{
				putchar(n % 10 + '0');
				putchar(m % 10 + '0');
				putchar(',');

			}
			m++;

		}
		n++;
	}
	printf("\n");
	return (0);
}
