#include "main.h"

/**
 * puts2 - check the code
 * @str : input
 * Return: Void
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len])
	{
		len++;
	}
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
