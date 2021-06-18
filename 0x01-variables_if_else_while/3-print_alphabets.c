#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chl, chu;

	chl = 'a';
	chu = 'A';
	while (chl <= 'z')
	{
		putchar(chl);
		chl++;
	}
	while (chu <= 'Z')
	{
		putchar(chu);
		chu++;
	}
	printf("\n");
	return (0);
}
