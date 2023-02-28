#include "main.h"

/**
 * _puts - print a string, followed by a new line
 * @str: pointer to the string
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	-putchar("\n");
}
