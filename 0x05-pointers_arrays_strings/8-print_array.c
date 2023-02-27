#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code
 * @a : input
 * @n : input
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
		}
	}
	else if (n == 0)
	{
		for (i = 0; i <= n; i++)
		{
				printf("%d\n", a[i]);
		}
	}
}
