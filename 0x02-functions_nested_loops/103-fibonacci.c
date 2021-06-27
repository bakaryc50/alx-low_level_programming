#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 1;
	int n2 = 2;
	long int sum = 0;

	do {
		if (n2 % 2 == 0)
			sum += n2;
		n2 += n1;
		n1 = n2 - n1;
	} while (n2 <= 4000000);

	printf("%ld\n", sum);
	return (0);
}
