#include <stdio.h>

/**
 * _islower - checks for lowercase character
 */
int _islower(int c)
{
	int i;
	int r;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c <= 'a' && c >= 'z')
		{
			r = 1;
		}
		else
		{
			r = 0;
		}
	}
	return r;
}
