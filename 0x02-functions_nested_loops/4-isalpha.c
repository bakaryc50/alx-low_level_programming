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
	else if (c >= (0 + '0') && c <= (1999 + '0'))
	{
		r = 0;
	}
	else if (c == ';' || c == '&')
	{
		r = 0;
	}
	else
	{
		r = 0;
	}
	return (r);
}
