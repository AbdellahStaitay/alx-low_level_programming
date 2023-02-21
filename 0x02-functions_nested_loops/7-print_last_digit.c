#include "main.h"
/**
 * print_last_digit - check for lower case letters
 *@n: input.
 *
 *Return: 1 if c is lowercase
 * 0 if c is anyhting else.
 */
int print_last_digit(int n)
{
	int r;

	if (n >= 0)
	{
		r = n % 10;
		_putchar('0' + r);
	}
	else
	{
		r = (n % 10) * -1;
		_putchar('0' + r);
	}
	return (r);
}
