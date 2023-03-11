#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: tHE character to print
 * Return: On success 1.
 * On error, -1 is returnedm and errno is set appropriately
 */

int_putchar(char c)
{
	return (write(1, &c, 1));
}