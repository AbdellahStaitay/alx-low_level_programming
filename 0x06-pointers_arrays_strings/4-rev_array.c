#include "main.h"
/**
 * reverse_array - reverse array a
 * @a: input
 * @n: input
 * Return:void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;
	int half;

	if (n % 2 == 0)
	{
		half = n / 2;
		while (half--)
		{
			tmp = a[n - i - 1];
			a[n - i - 1] = a[i];
			a[i] = tmp;
			i++;
		}
	}
	else
	{
		half = (n - 1) / 2;
		while (half--)
		{
			tmp = a[n - i - 1];
			a[n - i - 1] = a[i];
			a[i] = tmp;
			i++;
		}
	}
}
