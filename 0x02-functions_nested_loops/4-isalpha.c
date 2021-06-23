#include <stdio.h>

/**
 * _isalpha - checks for lowercase character
 * @c : is parameter
 *
 * Return: On success 1 if c is a letter, lowercase or uppercase.
 * On failed 0
 */
int _isalpha(int c)
{
	int r;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
