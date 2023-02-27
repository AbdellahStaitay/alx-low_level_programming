#include "main.h"

/**
 * _puts - check the code
 * @str : input
 * Return: Void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
