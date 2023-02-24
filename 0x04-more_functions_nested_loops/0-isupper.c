#include "main.h"

/**
 * _isupper - check for uppercase character.
 * @c: The characternto be checked
 * Return: 1 if character is uppercase, 0 if not.
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
