#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f;
	long int a = 1;
	long int b = 2;

	for (f = 0; f < 50; f++)
	{
		printf("%ld", a);
		if (f < 49)
		{
			b = b + a;
			a = b - a;
			printf(", ");
		}
	}

	putchar('\n');
	return (0);
}
