#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z' && (ch != 'q' || ch != 'e'))
	{
		putchar(ch);
		ch++;
	}
	printf("\n");
	return (0);
}
