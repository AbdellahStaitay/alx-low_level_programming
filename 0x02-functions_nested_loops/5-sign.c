#include "main.h"
/**
 *print_sign - check for lower case letters
 *@n: input.
 *
 *Return: 1 if c is lowercase
 * 0 if c is anyhting else.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
