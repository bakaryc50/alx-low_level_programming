#include <stdio.h>

/**
 * _islower - checks for lowercase character
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c <= 'a' && c >= 'z')
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
