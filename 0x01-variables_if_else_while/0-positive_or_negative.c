#include <stdio.h>

/*
 * main - entry point
 * Always: return 0 (SUCESS)
 */
int main(void)
{
	int n = rand();
	if (n > 0)
	{
		printf("%d is positive", n);
	}else if (n == 0)
	{
		printf("%d is zero", n);
	}else
	{
		printf("%d is negative", n);
	}
}
