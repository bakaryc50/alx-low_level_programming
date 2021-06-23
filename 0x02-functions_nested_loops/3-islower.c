#include <stdio.h>

/**
 * _islower - checks for lowercase character
 */
int _islower(int c)
{
	int r;

	if (c >= 'a' && c <= 'z')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return r;
}
