#include "main.h"
/**
 * print_line - Entry point
 * @n : input
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
