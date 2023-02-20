#include <stdio.h>
/**
 * main - print all the number of base16
 * print from a - f
 * with putchar for both and new line
 * Return: 0
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num <= 16; num++)
		putchar((num % 10) + '0');
	for (la = 'a'; la <= 'f'; la++)
		putchar (la);
	putchar('\n');
	return (0);
}
