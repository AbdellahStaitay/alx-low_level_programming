#include "main.h"
/**
 * print_numbers - Entry point
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
