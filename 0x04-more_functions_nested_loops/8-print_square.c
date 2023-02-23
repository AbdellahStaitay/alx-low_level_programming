#include "main.h"
/**
 * print_square - draw a diagonal line
 * @size : number of times the '\' char is printed
 * Description: Can only use _putchar to print
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
