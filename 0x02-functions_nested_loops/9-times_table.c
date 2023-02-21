#include "main.h"
/**
 * times_table - check for lower case letters
 *
 *Return: 1 if c is lowercase
 * 0 if c is anyhting else.
 */
void times_table(void)
{
	int i, j, p;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			p = i * j;
			if (j == 0)
			{
				_putchar('0' + p);
			}
			else if (p >= 10)
			{
				_putchar(' ');
				_putchar('0' + (p / 10));
				_putchar('0' + (p % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
