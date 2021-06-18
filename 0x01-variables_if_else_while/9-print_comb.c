#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		if (n == 9)
		{
			putchar(n % 10 + '0');
		}
		else
		{
			putchar(n % 10 + '0');
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	printf("\n");
	return (0);
}
