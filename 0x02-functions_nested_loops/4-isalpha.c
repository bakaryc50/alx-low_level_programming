#include <stdio.h>

/**
 * _islower - checks for lowercase character
 * @c : is parameter
 *
 * Return: On success 1.
 * On failed 0
 */
int _isalpha(int c)
{
	int r;

	if (c >= 'a' && c <= 'z')
	{
		r = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		r = 1;
	}
	else if (c >= 0 && c <= 1999)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
