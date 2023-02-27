#include "main.h"

/**
 * print_rev - check the code
 * @s : input
 * Return: Void
 */
void print_rev(char *s)
{
	int len = 0;
	int index;

	while (s[len])
	{
		len++;
	}
	index = len - 1;
	while (s[index])
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
