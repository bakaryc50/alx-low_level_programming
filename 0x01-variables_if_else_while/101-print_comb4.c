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
	int k;

	for (n = 0; n < 8; n++)
	{
		for (m = 0; m < 9; m++)
		{
			for (k = 0; k <= 9; k++)
			{
				if ((n != m && n != k) && (n < m && m < k))
				{
					putchar(n % 10 + '0');
					putchar(m % 10 + '0');
					putchar(k % 10 + '0');
					if (n == 7 && m == 8 && k == 9)
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
	}
	printf("\n");
	return (0);
}
