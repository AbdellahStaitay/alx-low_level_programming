#include "main.h"

/**
 * puts_half - check the code
 * @str : input
 * Return: Void
 */
void puts_half(char *str)
{
	int len = 0;
	int i = 0;
	int half;

	while (str[len])
	{
		len++;
	}
	if (len % 2 == 0)
	{
		half = len / 2;
		for (i = half; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		half = (len - 1) / 2;
		for (i = half + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
