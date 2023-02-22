#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the number to be treated
 * Return: value of the last digit of the number
 */

int print_last_digit(int n)
{
	int lst;

	lst = n % 10;
	if (lst < 0)
	{
		lst = lst * -1;
	}
	_putchar(lst + '0');
	return (lst);
}
