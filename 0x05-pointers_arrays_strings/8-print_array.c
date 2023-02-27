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
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
		}
	}
	else
	{
		for (i = n; i <= 0; i++)
		{
			if (i > 0)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
		}
	}
}
