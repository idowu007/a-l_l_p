#include <unistd.h>

/**
 * _putchar - print a program the prints _putchar
 * Return:0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
