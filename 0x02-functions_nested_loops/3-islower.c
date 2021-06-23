#include <stdio.h>

/**
 * _islower - checks for lowercase character
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
